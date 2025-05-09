#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
    Serial.begin(115200);
    Serial.println("Setup complete!");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Hello Dev Container!");
  delay(1000);
}
