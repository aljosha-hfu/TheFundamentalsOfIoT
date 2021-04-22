#include <Arduino.h>
int ledPin = 18;
void setup() {
    Serial.begin(115200);
    pinMode(ledPin, OUTPUT);
    Serial.println("start");
}

void loop() {
    if (touchRead(4) < 30) {
        Serial.println("licht");
        digitalWrite(ledPin, HIGH);
    } else {
        digitalWrite(ledPin, LOW);
    }
    delay(500);