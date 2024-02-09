#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0,INPUT);
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (5.0 / 1023.0);

  delay(sensorValue);
  digitalWrite(13,HIGH);
  digitalWrite(12,LOW);
  delay(sensorValue);
  digitalWrite(13,LOW);
  digitalWrite(12,HIGH);

  Serial.println(sensorValue);
  Serial.println(voltage);
}
