int led = 10;
int B = 9;
int k = 0; 

void setup() {
  // put your setup code here, to run once:
 pinMode(led, OUTPUT);
 pinMode(B, INPUT_PULLUP);
 Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(B) == LOW){
    digitalWrite(led, LOW);
    Serial.println("LAAG");
  }

  else{
    digitalWrite(led, HIGH);
    Serial.println("Hoog");
  }
}
