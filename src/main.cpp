#include <Arduino.h>

#ifndef LED_BUILTIN
#define LED_BUILTIN 2
#endif

void setup() {
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.println("\n--- ESP32 Flashing Test Successful ---");
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("ESP32 Alive - LED ON");
  delay(1000);

  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("ESP32 Alive - LED OFF");
  delay(1000);
}