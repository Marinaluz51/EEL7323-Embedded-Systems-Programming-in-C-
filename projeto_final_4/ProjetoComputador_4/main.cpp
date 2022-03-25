
// Includes
#include "SerialPort/SerialPort.cpp"
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <thread>
#include <vector>
#include <ctime>

/*
- SerialPort will be transformed into a class
- Thread class is the default for  LLVM Project threading it just refer to task1 , only one needed for now
- The UI class is still to be implemented with the assitance of some simple UI lib (maybe even default input text generator)
    - it will have just input to accept numbers and dates

- This is just a initial demo to validate reading through UART of the arduino (it was the most challenging part)
*/
using namespace std;
int globalcounter = 1;
time_t initDate, actualDate;
struct node
{
    int32_t timeStamp;
    int32_t temp;
    int32_t acId;
};
vector<node> logsList;
std::string logData = "logData_";
void task1(bool *taskRequired)
{
    bool execption = false;
    const char devicePathStr[] = "/dev/cu.SLAB_USBtoUART"; // Fill this up with the serial port your arduino is connected to.
    /*This will be changed to a .env file, also I would like to perform a routine to automatically detect the
    serial port arduino is connected to, but due to the time I still have to finish this project that probably won't be possible
    */
    ssize_t totalBytesRead = 0;
    const int baudRate = 9600;
    int sfd = openAndConfigureSerialPort(devicePathStr, baudRate);
    if (sfd < 0)
    {
        if (sfd == -1)
        {
            printf("Unable to connect to serial port.\n");
            *taskRequired = false;
        }
        else
        { // sfd == -2
            printf("Error setting serial port attributes.\n");
            *taskRequired = false;
        }
    }
    initDate = std::time(nullptr);
    while (*taskRequired)
    {
        if (execption)
        {
            closeSerialPort();
            int sfd = openAndConfigureSerialPort(devicePathStr, baudRate);
            if (sfd < 0)
            {
                if (sfd == -1)
                {
                    printf("Unable to connect to serial port.\n");
                    *taskRequired = false;
                }
                else
                { // sfd == -2
                    printf("Error setting serial port attributes.\n");
                    *taskRequired = false;
                }
            }

            execption = false;
        }
        char bufferSize[3];
        int convertedBufferSize;
        /*
        This section of code is just to sample thread use, it will have the implementation of a proper reading on the UART of Arduino
        To fetch the data that admin asks of the hardware
        It already have been validated through sampling sending random information from the arduino port to be read here
        The values from the test can be checked on afile.log
        */
        ssize_t numBytesRead = readSerialData(bufferSize, 4);
        if (numBytesRead == sizeof(int))
        {
            try
            {
                convertedBufferSize = std::stoi((std::string)bufferSize);
            }
            catch (std::invalid_argument e1)
            {
                cout << "Error reading serial info";
                execption = true;
            }
            if (!execption)
            {
                std::cout << convertedBufferSize << " Incoming info \n";
                usleep(30000);
                writeSerialData(bufferSize, 4);
                int numberOfNodes = convertedBufferSize / (sizeof(node));
                char *myBuffer = new char(convertedBufferSize);
                usleep(10000000);
                ssize_t myBytesRead = readSerialData(myBuffer, convertedBufferSize);
                std::cout << myBytesRead << " the size read \n";
                std::cout << numberOfNodes << " the size of the nodes \n";
                node mynodes[numberOfNodes];
                memcpy(mynodes, myBuffer, convertedBufferSize);
                for (int i = 0; i < numberOfNodes; i++)
                {
                    std::cout << "temp " << mynodes[i].temp << "\n";
                    std::cout << "acId " << mynodes[i].acId << "\n";
                    std::cout << "timestamp " << mynodes[i].timeStamp << "\n";
                    logsList.push_back(mynodes[i]);
                }
            }
        }
        usleep(100000);
    }
    // * Close serial port when done, will be implemented on next delivery
    std::cout << "Bye bye \n";
}

int main(int argc, const char *argv[])
{
    bool programActive = true;

    std::thread t1(task1, &programActive);

    while (true)
    {
        std::cout << "Admin controller program \n";
        int programController;
        std::cout << "Choose a action to perform, \n 1 - to query all events in a UNIX EPOCH TIMESTAMP interval \n"
                     " 2 - to get time that the System is live \n";
        ;
        std::cin >> programController;
        switch (programController)
        {
        case 1:
        {
            std::cout << "Insert first date \n";
            int firstDate;
            std::cin >> firstDate;
            std::cout << "Insert second date \n";
            int secondDate;
            std::cin >> secondDate;
            std::ofstream outfile;
            std::string fileName = logData;
            fileName += std::to_string(globalcounter);
            fileName += ".log";
            outfile.open(fileName);
            globalcounter++;
            for (node tmp : logsList)
            {
                cout << "Checking it";
                cout << tmp.timeStamp;
                if (firstDate < tmp.timeStamp < secondDate)
                {
                    outfile << "equipmant ID : " << tmp.acId << " timestamp : " << tmp.timeStamp << " temperature : " << tmp.temp << "\n";
                }
            }
            outfile.close();
            std::cout << "Your information has been saved to a log please check it later! Thank you \n";

            break;
        }
        case 2:
        {
            actualDate = std::time(nullptr);
            time_t operating = actualDate - initDate;
            std::cout << std::asctime(std::localtime(&operating))
                      << operating << " system is operating for this long \n";

            break;
        }
        default:
            programActive = false;
        }
    }

    // * Write using writeSerialData(const char* bytes, size_t length)

    return 0;
}
