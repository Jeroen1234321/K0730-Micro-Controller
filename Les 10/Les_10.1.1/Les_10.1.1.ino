
int L1 = 2;
int L2 = 3;
int L3 = 4;
int L4 = 5;
int B = 6;
int S = 0;

long timer = 0;
int timerdelay = 1000;
int stand = 1;



void setup() {
  pinMode(L1, OUTPUT);
  pinMode(L2, OUTPUT);
  pinMode(L3, OUTPUT);
  pinMode(L4, OUTPUT);
  pinMode(B, INPUT);

}

void loop() {

  if(digitalRead(B) == HIGH){
   S = 1;
   stand = 1;
  }
  if(millis() >= timer+timerdelay && S == 1){
    timer = millis();

    switch(stand){
      case 1:
        digitalWrite(L1, HIGH);
      break;
      case 2:
        digitalWrite(L2, HIGH);
      break;
      case 3:
        digitalWrite(L3, HIGH);
      break;
      case 4:
        digitalWrite(L4, HIGH);
      break;
      case 5:
        digitalWrite(L1, LOW);
        digitalWrite(L2, LOW);
        digitalWrite(L3, LOW);
        digitalWrite(L4, LOW);
        S = 0;
      break;
    }

    stand++;
  }

}
