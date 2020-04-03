const int B = 9;
const int LED = 7;
const int F = 523;
const int DOTL = 100;
const int DASHL = DOTL * 3;
const int inter = DOTL;
const int lgap = DOTL * 2;
const int wgap = DOTL * 4;

char Zin[87] = {'D','O','O','R','M','I','D','D','E','L',' ','V','A','N',' ','E','E','N',' ','B','U','Z','Z','E','R',' ','E','N',' ','L','E','D','L','A','M','P','J','E',' ','H','E','B',' ','I','K',' ','J','E','R','O','E','N',' ','V','A','N',' ','B','R','I','T','S','E','M',' ','D','E','Z','E',' ','M','O','R','S','E','C','O','D','E',' ','G','E','M','A','A','K','T'};
void setup() {
  Serial.begin(9600);
  pinMode(B, OUTPUT);
  pinMode(LED, OUTPUT);

}

void loop() {
  for (int x = 0; x <= 86; x++) {
    soundLetter(Zin[x]);
    delay(lgap);
  }

}

void dot() {
  tone(B, F);
  digitalWrite(LED, HIGH);
  delay(DOTL);
  noTone(B);
  digitalWrite(LED, LOW);
}

void dash() {
  tone(B, F);
  digitalWrite(LED, HIGH);
  delay(DASHL);
  noTone(B);
  digitalWrite(LED, LOW);
}

void soundLetter(char letter) {
  switch (letter) {
    case 'A':
      dot();
      dash();
      return;

    case 'B':
      dash();
      dot();
      dot();
      dot();
      return;

    case 'C':
      dash();
      dot();
      dash();
      dot();
      return;

    case 'D':
      dash();
      dot();
      dot();
      return;

    case 'E':
      dot();
      return;

    case 'F':
      dot();
      dot();
      dash();
      dot();
      return;

    case 'G':
      dash();
      dash();
      dot();
      return;

    case 'H':
      dot();
      dot();
      dot();
      dot();
      return;

    case 'I':
      dot();
      dot();
      return;

    case 'J':
      dot();
      dash();
      dash();
      dash();
      return;

    case 'K':
      dash();
      dot();
      dash();
      return;

    case 'L':
      dot();
      dash();
      dot();
      dot();
      return;

    case 'M':
      dash();
      dash();
      return;

    case 'N':
      dash();
      dot();
      return;

    case 'O':
      dash();
      dash();
      dash();
      return;

    case 'P':
      dot();
      dash();
      dash();
      dot();
      return;

    case 'Q':
      dash();
      dash();
      dot();
      dash();
      return;

    case 'R':
      dot();
      dash();
      dot();
      return;

    case 'S':
      dot();
      dot();
      dot();
      return;

    case 'T':
      dash();
      return;

    case 'U':
      dot();
      dot();
      dash();
      return;

    case 'V':
      dot();
      dot();
      dot();
      dash();
      return;

    case 'W':
      dot();
      dash();
      dash();
      return;

    case 'X':
      dash();
      dot();
      dot();
      dash();
      return;

    case 'Y':
      dash();
      dot();
      dash();
      dash();
      return;

    case 'Z':
      dash();
      dash();
      dot();
      dot();
      return;
  }
}

