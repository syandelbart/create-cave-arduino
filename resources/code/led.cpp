// Oefening 1 - LED

#include <Arduino.h>
// Definieer pinnummers
const int LED_PIN = 3;

void setup()
{
    Serial.begin(9600);

    // Definiëer INPUT & OUTPUT pinnen
    pinMode(LED_PIN, OUTPUT);
}

void loop()
{

    // Zet LED aan
    digitalWrite(LED_PIN, HIGH);
    // Wacht 1000ms (=1 seconde)
    delay(1000);
    // Zet LED uit
    digitalWrite(LED_PIN, LOW);
    delay(1000);
}
