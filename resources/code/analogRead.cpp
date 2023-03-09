// Oefening 4 - Potentio meter

#include <Arduino.h>
// Definieer pinnummers
const int POTENTIO_PIN = 5; // Analoog!
const int LED_PIN = 3;

void setup()
{
  Serial.begin(9600);

  // Definiëer INPUT & OUTPUT pinnen
  pinMode(LED_PIN, OUTPUT);
  pinMode(POTENTIO_PIN, INPUT);
}

void loop()
{
  // Analoog signaal lezen van de potentiometer
  int potentioState = analogRead(POTENTIO_PIN);
  // Printen van waarde potentiometer
  Serial.println(potentioState);

  // Analoog signaal naar led schrijven
  analogWrite(LED_PIN, potentioState);
  delay(100);
}
