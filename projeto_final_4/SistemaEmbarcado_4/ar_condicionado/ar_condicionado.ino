#include "GeneralController.h"
#include <WiFi.h>
#include <NTPClient.h>
#include <WiFiUdp.h>
#include <HTTPClient.h>

#include <ArduinoJson.h>
#define _TIMERINTERRUPT_LOGLEVEL_     0
#include <ESP32TimerInterrupt.h>


WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP);


#include "MLController.h"
/*
  GeneralConttroler Class:
  - The generalConttroler class in underProgress yet, there will be a LogHandler class that will be friend to generalController.
  - The LogHandlerClass will implement a linkedlist and be saving the logs that will be sent via serial(UART) upon admin
    request on the computer software

  - Additionaly this logs will be available to be queried through a webServer inserted on the ESP32 module
  - The button will be a interruption function (so it will change the state when the user asks)
  - The temperature potentiometer as well will be inserted at a interuption

  LearningPattern Class:
  - The ML algo will be added thorugh tensorflow lite that is compatible with this version of the esp32, the ml algo will have its own class
  and will be used on the main loop

  ESP32 Arduino WiFi Class:
  - The WiFi class will be used to initialize a web server and client to query data from actual temperature and send info for the
  cellphone app
  - The webApp for querying temp data will be:
   https://thecustomizewindows.com/2019/06/esp32-arduino-fetching-current-weather-data-no-json-parsing/

  Overall:
  - This is just a initial demo that validates the potentiometer and button reading and logic.
*/
const char* ssid     = "JW_Double_Black";
const char* password = "duster2020";
GeneralController generalControl(34, 13, true, 1509);
MLController *MLcontrol;
float newData[3] = {0};
bool fetchNewData = false;
bool IRAM_ATTR TimerHandler0(void * timerNo)
{
  //Acquiring new data to input on neural network
  fetchNewData = true;

  return true;
}


#define TIMER0_INTERVAL_MS        10000

ESP32Timer ITimer0(0);

void setup() {
  //Initialize baudRate
  Serial.begin(9600);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
//    Serial.print(".");
  }
  //  Serial.print(F("\nStarting TimerInterruptTest on ")); Serial.println(ARDUINO_BOARD);
  //  Serial.println(ESP32_TIMER_INTERRUPT_VERSION);
  
  // Interval in microsecs
  if (ITimer0.attachInterruptInterval(TIMER0_INTERVAL_MS * 1000, TimerHandler0))
  {
  }
  else {
  //  Serial.println(F("Can't set ITimer0. Select another freq. or timer"));
  //  Serial.println("Breaking issue, reseting esp");
    ESP.restart();
  }
// MLcontrol = new MLController();




  // Print local IP address and start web server
  //  Serial.println("");
  //  Serial.println("WiFi connected.");
  //  Serial.println("IP address: ");
  //  Serial.println(WiFi.localIP());
  // Initialize a NTPClient to get time
  timeClient.begin();
  // Set offset time in seconds to adjust for your timezone, for example:
  // GMT +1 = 3600
  // GMT +8 = 28800
  // GMT -1 = -3600
  // GMT 0 = 0
  timeClient.setTimeOffset(-10800);
}

void loop() {
  while (!timeClient.update()) {
    timeClient.forceUpdate();
  }

  long epochTime = timeClient.getEpochTime();

  generalControl.StateController();
  if (generalControl.GetACState()) {
    generalControl.TemperatureController(epochTime);
    if (fetchNewData) {
     Serial.println("Acquiring new input for neural network");
      generalControl.FetchMLData(newData);
   bool isBufFull = MLcontrol->fillBuffer(newData);
    if(isBufFull){
      Serial.println("Call ml algo and apply logic");
       float precipProb = MLcontrol->invoke();
        if(precipProb < 0){
            Serial.println("ML algo issues, reseting system");
          ESP.restart();
            }
        }
       else{
        Serial.println("Stack is still initializing");
        }
      fetchNewData = false;
      
    }
  }
 else {
   generalControl.sendLogs();
  }

  delay(500);
}
