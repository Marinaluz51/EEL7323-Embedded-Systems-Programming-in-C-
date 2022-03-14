#ifndef GeneralController_h
#define GeneralController_h

/*
This class has the purpose of defining the main interaction with external/analogic sensors and controllers
There will be a LogHandler with a linkedlist that will be a friend to this class to save information regarding the updates
*/
class GeneralController {
public:
  GeneralController(int _potPin,int _buttonPin,bool _actualState);
  int TemperatureController();
  void StateController();
   bool GetACState();
   
    
private:
 int potPin, buttonPin;
 int potValue = 0, buttonValue = 0;
 int actualTemp = 0;
 bool actualState = false;
};
#endif
