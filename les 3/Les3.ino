#define buzzer 3
#define LEDR 4
#define LEDG 5
#define S 6
long timer = 0;
int timerdelay = 2000;
int T = 0;
int C = 0;


void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(LEDR, OUTPUT);
  pinMode(LEDG, OUTPUT);
  pinMode(S, INPUT_PULLUP);
  Serial.begin(115200);

}

void loop() {
  if (digitalRead(S) == LOW) {
    T = 1;
    digitalWrite(LEDG, HIGH);
    digitalWrite(LEDR, LOW);
  }

  else {
    T = 0;
    noTone(buzzer);
    digitalWrite(LEDG, LOW);
    digitalWrite(LEDR, HIGH);
  }

  if (millis() >= timer + timerdelay && T == 1) {
    if (C == 0) {
      tone(buzzer, 2000);
      C++;
    }

    else if (C == 1) {
      tone(buzzer, 2500);
      C++;
    }
    else if (C == 2) {
      tone(buzzer, 3000);
      C++;
    }
    else if (C == 3) {
      tone(buzzer, 3500);
      C++;
    }
    else if (C == 4) {
      tone(buzzer, 4000);
      C++;
    }
    else if (C == 5) {
      tone(buzzer, 4500);
      C++;
    }
    else if (C == 6) {
      tone(buzzer, 5000);
      C++;
    }
    else if (C == 7) {
      tone(buzzer, 5500);
      C = 1;
    }
    timer = millis();
  }


}




