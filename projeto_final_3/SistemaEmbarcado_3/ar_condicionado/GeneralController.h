#ifndef GeneralController_h
#define GeneralController_h
#include "LogsHandler.h"


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



  private:
    int potPin, buttonPin;
    int potValue = 0, buttonValue = 0;
    int actualTemp = 0;
    int acId = 0;
    bool actualState = false;
    LogsHandler *logsHand;

};
#endif
