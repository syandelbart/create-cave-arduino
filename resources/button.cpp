// Oefening 2 - Button

#include <Arduino.h>
// Definieer pinnummers
const int BUTTON_PIN = 2;
const int LED_PIN = 13;

void setup()
{
  Serial.begin(9600);

  // Definiëer INPUT & OUTPUT pinnen
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, OUTPUT);
}

void loop()
{
  // Lees knoppenstatus
  int buttonState = digitalRead(BUTTON_PIN);

  // Controleer of knop is ingedrukt
  if (buttonState == HIGH)
  {
    // Zet LED aan
    digitalWrite(LED_PIN, HIGH);
  }
  else
  {
    // Zet LED uit
    digitalWrite(LED_PIN, LOW);
  }

  // Dim LED naar 50% helderheid
}
