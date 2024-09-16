#include "BluetoothSerial.h"

BluetoothSerial SerialBT;

void setup() {
  Serial.begin(115200);
  SerialBT.begin("ESP32test"); // Bluetooth ismi
  Serial.println("Bluetooth Başladi");
}

void loop() {
  if (SerialBT.available()) {
    char incomingChar = SerialBT.read();
    Serial.write(incomingChar); // Gelen veriyi geri gönder
    SerialBT.write(incomingChar);
  }
}
