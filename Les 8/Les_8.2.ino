#include <Servo.h>

Servo myservo;
int B1 = 2;
int TurnSpeed = 45;

long timer = 0;
int timerdelay = 100;

void setup() {
  myservo.attach(9);
  pinMode(B1, INPUT);
  Serial.begin(9600);

}

void loop() {
  if (millis() >= timer + timerdelay) {
    if (digitalRead(B1)) {
      if (TurnSpeed < 180) {
        TurnSpeed++;
        timer = millis();
        Serial.println(TurnSpeed);
      }
    }
  }



}
