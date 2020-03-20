int LED1 = 2;
int LED2 = 3;
int S1 = 4;
int S2 = 5;

int x = 0;
int y = 0;


void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(S1, INPUT);
  pinMode(S2, INPUT);
  Serial.begin(9600);

}

void loop() {
  if(digitalRead(S1) == HIGH){
    x = 1;
    digitalWrite(LED1, HIGH);
  }

  else  if(digitalRead(S1) == LOW){
    x = 0;
    digitalWrite(LED1, LOW);
  }

  if(digitalRead(S2) == HIGH){
    y = 1;
    digitalWrite(LED2, HIGH);
  
  }

  else  if(digitalRead(S2) == LOW){
    y = 0;
    digitalWrite(LED2, LOW);
  }
Serial.print("x = ");
Serial.println(x);
Serial.print("y = ");
Serial.println(y);
}
