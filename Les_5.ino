#define LED1 2
#define LED2 3
#define LED3 4
#define LED4 5
#define LED5 6
#define S1 7

long timer = 0;
float timerdelay = 500;
int x = 1;
int y = 0;



void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);
  pinMode(LED5, OUTPUT);
  pinMode(S1, INPUT_PULLUP);
  Serial.begin(115200);
}

void loop() {
  if (millis() >= timer + timerdelay) {


    if (x == 1) {
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      x++;
    }

    else if (x == 2) {
      digitalWrite(LED2, HIGH);
      digitalWrite(LED1, LOW);
      x++;
    }

    else if (x == 3) {
      digitalWrite(LED3, HIGH);
      digitalWrite(LED2, LOW);
      x++;
    }

    else if (x == 4) {
      digitalWrite(LED4, HIGH);
      digitalWrite(LED3, LOW);
      x++;
    }

    else if (x == 5) {
      digitalWrite(LED5, HIGH);
      digitalWrite(LED4, LOW);
      x++;
    }

    else if (x == 6) {
      digitalWrite(LED4, HIGH);
      digitalWrite(LED5, LOW);
      x++;
    }

    else if (x == 7) {
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, LOW);
      x++;
    }

    else if (x == 8) {
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
      x = 1;
    }


    timer = millis();
  }

  if (digitalRead(S1) == LOW && y == 0) {
    y = 1;
    if (x == 4 || x == 8) {
      timerdelay *= 0.9;
      Serial.println("go ");
      Serial.print(timerdelay);
    }

    else {
      timerdelay = 500;
    }
  }

  if(digitalRead(S1) == HIGH){
    y = 0;
  }

}
