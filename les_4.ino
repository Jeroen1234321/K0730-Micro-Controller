#define S1 2
#define LED 3
#define D1 4
#define B1 5



void setup() {
  pinMode(S1, INPUT_PULLUP);
  pinMode(B1, OUTPUT);
  pinMode(LED, OUTPUT);
  pinMode(D1, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  if (digitalRead(D1) == LOW) {
    if (digitalRead(S1) == HIGH) {
      digitalWrite(LED, HIGH);
    }

    else {
      tone(B1, 4000);
      Serial.println("1");
    }
  }

  else {
    Serial.println("2");
    digitalWrite(LED, LOW);
    noTone(B1);

  }


}
