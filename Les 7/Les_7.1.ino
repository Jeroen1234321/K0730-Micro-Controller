int B = 3;
int S1 = 4;
int S2 = 5;


void setup() {
  pinMode(B, OUTPUT);
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  Serial.begin(9600);

}

void loop() {
  Serial.println(digitalRead(S1));

}
