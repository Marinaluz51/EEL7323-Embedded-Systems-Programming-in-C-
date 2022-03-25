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
    Serial.println("The temperature");
    Serial.println(actualTemp);
    actualTemp = Temp;
    logsHand->logEventos(actualTemp, epochTime);

  }
  return actualTemp;
};
int GeneralController::MLTemperatureControl(long epochTime, bool Tempdirection) {
  if (Tempdirection) {
    if (actualTemp < 28) {
      actualTemp--;
      logsHand->logEventos(actualTemp, epochTime);
    }

  }
  else {
    if (actualTemp > 16) {
      actualTemp++;
      logsHand->logEventos(actualTemp, epochTime);
    }

  }
  return actualTemp;

}

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

void GeneralController::sendLogs() {
  logsHand->flushLogs();

}

void GeneralController::FetchMLData(float *weatherVars) {
  HTTPClient http;
  http.begin(endpoint + key); //construct the URL
  int httpCode = http.GET();  //send request

  if (httpCode > 0) {
    String payload = http.getString();
    DeserializationError error = deserializeJson(JSONDocument, payload);
    if (error) {
//      Serial.print(F("deserializeJson() failed: "));
//      Serial.println(error.f_str());
      return;
    }

    weatherVars[0] = JSONDocument["main"]["temp"];
    weatherVars[1] = JSONDocument["main"]["pressure"];
    weatherVars[2] = JSONDocument["main"]["humidity"];
  }

  else {
    Serial.println("Error on HTTP request");
  }

  http.end();


}
