
//Includes
#include "SerialPort/SerialPort.cpp"
#include "TypeAbbreviations/TypeAbbreviations.hpp"
#include <iostream>
#include <unistd.h>
#include <fstream>
#include <thread>

/*
- SerialPort will be transformed into a class 
- Thread class is the default for  LLVM Project threading it just refer to task1 , only one needed for now
- The UI class is still to be implemented with the assitance of some simple UI lib (maybe even default input text generator)
    - it will have just input to accept numbers and dates

- This is just a initial demo to validate reading through UART of the arduino (it was the most challenging part)
*/
void task1(bool* taskRequired)
{
    std::ofstream outfile;
    const char devicePathStr[] = "/dev/tty.usbserial-1120"; //Fill this up with the serial port your arduino is connected to.
    /*This will be changed to a .env file, also I would like to perform a routine to automatically detect the 
    serial port arduino is connected to, but due to the time I still have to finish this project that probably won't be possible
    */
    const int baudRate = 9600;
    char buffer[150];
    int sfd = openAndConfigureSerialPort(devicePathStr, baudRate); 
    while(*taskRequired){
        usleep(1000000);
        /*
        This section of code is just to sample thread use, it will have the implementation of a proper reading on the UART of Arduino
        To fetch the data that admin asks of the hardware
        It already have been validated through sampling sending random information from the arduino port to be read here
        The values from the test can be checked on afile.log
        */
       readSerialData(buffer, 144);
       outfile.open("afile.log");
       std::cout <<   buffer << "\n";
        outfile << buffer ;
        outfile.close();
        std::cout << "thread running \n";
        usleep(1000000);
        // * Remember to flush potentially buffered data when necessary, just a reminder
    }
    // * Close serial port when done, will be implemented on next delivery
    std::cout << "Bye bye \n";
}

int main(int argc, const char * argv[]) {
    bool programActive = true;
    //* Open port, and connect to a device
    std::cout << "Start admin program"; // this interactions will be substituted by a proper dialogInput
    
    std::thread t1(task1, &programActive);



    // // * Read using readSerialData(char* bytes, size_t length)
    printf("\n OpenDoor");
    char buffer[150];
    // readSerialData(buffer, 144);
    // std::cout <<   buffer;

    while(true){
        int programController;
        std::cout << "Choose a action to perform, 1 to query data from AC controller and 2 to shutdown program \n";
        std::cin >> programController;
        switch (programController)
        {
        case 1:
            std::cout << "Input \n";
            std::cin >> programController;
            if(programController == 0) {
                std::cout << "Shutting thread down \n";
                programActive = false;
            }
            break;
        case 2:
        break;
        default:
            break;
        }
    }
    
    // * Write using writeSerialData(const char* bytes, size_t length)
    
    
    
    return 0;
}


