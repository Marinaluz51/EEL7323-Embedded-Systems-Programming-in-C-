#include "Arduino.h"
#include "GeneralController.h"




GeneralController::GeneralController(int _potPin, int _buttonPin, bool _actualState, int _acId) {
  potPin = _potPin;
  buttonPin = _buttonPin;
  actualState = _actualState;
  acId = _acId ;
  potValue = analogRead(potPin);
  pinMode(buttonPin, INPUT_PULLUP);
  actualTemp = map(analogRead(potPin), 0, 4095, 16, 28);
  LogsHandler LogsHandler1(acId);
  logsHand = &LogsHandler1;
};
int GeneralController::TemperatureController(long epochTime) {
  potValue = analogRead(potPin);
  int Temp = map(potValue, 0, 4095, 16, 28);
  if (actualTemp != Temp) {

    actualTemp = Temp;
    logsHand->logEventos(actualTemp, epochTime);

  }
  return actualTemp;
};
void GeneralController::StateController()
{
  buttonValue = digitalRead(buttonPin);
  if (buttonValue == LOW) {
    actualState = !actualState;
  }
}

bool GeneralController::GetACState() {
  return actualState;
};

void GeneralController::sendLogs(){
   logsHand->flushLogs();
  
  }
