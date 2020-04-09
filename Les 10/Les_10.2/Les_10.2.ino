int a = 5;
int b = 4;
int c = 3;
int d = 2;
int K = 6;
bool S = 0;

long timer = 0;
int timerdelay = 1000;
int stand = 0;


void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(K, INPUT);

}

void loop() {
  if (digitalRead(K) == HIGH && S == 0) {
    S = 1;
    stand = 1;
  }

  if (millis() >= timer + timerdelay && S == 1) {
    timer = millis();
    switch (stand) {
      case 1:
        EEN();
        break;
      case 2:
        TWEE();
        break;
      case 3:
        DRIE();
        break;
      case 4:
        VIER();
        break;
      case 5:
        VIJF();
        break;
      case 6:
        ZES();
        break;
      case 7:
        ZEVEN();
        break;
      case 8:
        ACHT();
        break;
      case 9:
        NEGEN();
        break;
      case 10:
        CLEAR();
        S = 0;
        break;

    }
    stand++;
  }
}

void CLEAR() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
}

void EEN() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
}

void TWEE() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
}

void DRIE() {
  digitalWrite(a, LOW);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}


void VIER() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
}


void VIJF() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
}


void ZES() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
}


void ZEVEN() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
}


void ACHT() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, LOW);
}


void NEGEN() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
}



