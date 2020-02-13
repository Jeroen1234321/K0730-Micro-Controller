
#define LED 3
#define A 2


void setup() {
  pinMode(LED, OUTPUT);
  pinMode(A, INPUT_PULLUP); 
  Serial.begin(115200);

}

void loop() {
  if (digitalRead(A) == LOW) {
    digitalWrite(LED, HIGH);
    Serial.println("Laag");
  }

  else {
    digitalWrite(LED, LOW);
    Serial.println("hoog");
  }

}
