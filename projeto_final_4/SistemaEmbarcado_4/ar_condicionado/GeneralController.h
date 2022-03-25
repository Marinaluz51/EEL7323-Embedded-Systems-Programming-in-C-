#ifndef GeneralController_h
#define GeneralController_h
#include "LogsHandler.h"
#include <HTTPClient.h>
#include <ArduinoJson.h>


/*
  This class has the purpose of defining the main interaction with external/analogic sensors and controllers
  There will be a LogHandler with a linkedlist that will be a friend to this class to save information regarding the updates
*/
class GeneralController {
  public:
    GeneralController(int _potPin, int _buttonPin, bool _actualState, int _acId);
    int TemperatureController(long epochTime);
    void StateController();
    bool GetACState();
    void sendLogs();
    void FetchMLData(float *weatherVars);
    int MLTemperatureControl(long epochTime, bool Tempdirection);



  private:
    int potPin, buttonPin;
    int potValue = 0, buttonValue = 0;
    int actualTemp = 0;
    int acId = 0;
    bool actualState = false;
    LogsHandler *logsHand;
    const String endpoint = "https://api.openweathermap.org/data/2.5/weather?lat=25.7741728&lon=-80.19362&IN&APPID=";
    const String key = "2a1d481603d90160b9ca11a30138b0c1";
    StaticJsonDocument<1200> JSONDocument;

};
#endif
