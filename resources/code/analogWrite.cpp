// Oefening 3 - LED Dimmer

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
    // analogWrite 0 (= 0/4)
    analogWrite(LED_PIN, 0);
    delay(1000);
    // analogWrite 64 (= 1/4)
    analogWrite(LED_PIN, 64);
    delay(1000);
    // analogWrite 64 (= 2/4)
    analogWrite(LED_PIN, 128);

    delay(1000);
    // analogWrite 192 (= 3/4)
    analogWrite(LED_PIN, 192);
    delay(1000);
    // analogWrite 64 (= 4/4)
    analogWrite(LED_PIN, 255);
    delay(1000);
}
