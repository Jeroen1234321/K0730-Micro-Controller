int B = 3;
int P = 100;
int S = 300;
int LE = 300;
int SP = 700;
int TH = 523;

void setup() {
  pinMode(B, OUTPUT);

}

void loop() {
  A();
  delay(3000);

}

void DOT() {
  tone(B, TH);
  delay(P);
  noTone(B);
  delay(LE);

}

void DASH() {
  tone(B, TH);
  delay(S);
  noTone(B);
  delay(LE);
}

void A() {
  DOT();
  DASH();
}

void B() {
  DASH();
  DOT();
  DOT();
  DOT();
}

void C(){
  DASH();
  DOT();
  DASH();
  DOT();
}

