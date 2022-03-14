#include "Arduino.h" 
#include "GeneralController.h"
  GeneralController::GeneralController(int _potPin,int _buttonPin,bool _actualState){
    potPin = _potPin;
    buttonPin = _buttonPin;
    actualState = _actualState;
    potValue = analogRead(potPin);
    pinMode(buttonPin, INPUT_PULLUP);
    actualTemp = map(analogRead(potPin), 0, 4095, 16, 28);
    };
  int GeneralController::TemperatureController(){
    potValue = analogRead(potPin);
    int Temp = map(analogRead(potPin), 0, 4095, 16, 28);
    if(actualTemp != Temp){
   
      actualTemp = Temp;
   
      }
      return actualTemp;
    };
    void GeneralController::StateController()
   { 
    buttonValue = digitalRead(buttonPin);
    if (buttonValue == LOW){
      actualState = !actualState; 
    }
   }
    
   bool GeneralController::GetACState(){
      return actualState;
    };
    
