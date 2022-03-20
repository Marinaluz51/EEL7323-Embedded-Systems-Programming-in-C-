#include "Arduino.h"
#include "LogsHandler.h"
LogsHandler::LogsHandler(int _acId) {
  acId = _acId;
  //  root = NULL;
  //  last = NULL;

};
void LogsHandler::logEventos(int _Temp, long epochTime) {
//  Serial.println("Printing temperature for log");
//  Serial.println(_Temp);
//  Serial.println("UNIX Time");
//  Serial.println(epochTime);
  listLogs[_size] = {_Temp, 1509, epochTime};
  _size++;
  if (_size > 90) {
    //Getting close to buffer capacity limit on system, offloading to computer software
    flushLogs();
  }
}

void LogsHandler::flushLogs() {

  int len =  _size * sizeof(node);
  if(len > 0){
    Serial.println(len);
    delay(3);
    while(Serial.available() < 3){
      delay(1500);
      Serial.println(len);
      }
      while(Serial.available() > 0){
         Serial.read();
        }

    Serial.write((uint8_t*)listLogs, len);
     _size = 0; //reseting array
  }

}
