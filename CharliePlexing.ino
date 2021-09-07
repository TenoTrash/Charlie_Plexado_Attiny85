#define A 0
#define B 1
#define C 2

#define ESPERA 200

void setup() {

}

void loop() {
  // put your main code here, to run repeatedly:
  for (int h = 1; h <= 6; h++) {
    panelCharlie(h);
    delay(ESPERA);
  }


}

void panelCharlie(int LED) {
  if (LED == 1) {
    pinMode(A, OUTPUT);
    digitalWrite(A, LOW);
    pinMode(B, OUTPUT);
    digitalWrite(B, HIGH);
    pinMode(C, INPUT);
  }
  if (LED == 2) {
    pinMode(A, OUTPUT);
    digitalWrite(A, HIGH);
    pinMode(B, OUTPUT);
    digitalWrite(B, LOW);
    pinMode(C, INPUT);
  }
  if (LED == 4) {
    pinMode(A, INPUT);
    pinMode(B, OUTPUT);
    digitalWrite(B, LOW);
    pinMode(C, OUTPUT);
    digitalWrite(C, HIGH);

  }
  if (LED == 3) {
    pinMode(A, INPUT);
    pinMode(B, OUTPUT);
    digitalWrite(B, HIGH);
    pinMode(C, OUTPUT);
    digitalWrite(C, LOW);
  }
  if (LED == 5) {
    pinMode(A, OUTPUT);
    digitalWrite(A, LOW);
    pinMode(B, INPUT);
    pinMode(C, OUTPUT);
    digitalWrite(C, HIGH);
  }
  if (LED == 6) {
    pinMode(A, OUTPUT);
    digitalWrite(A, HIGH);
    pinMode(B, INPUT);
    pinMode(C, OUTPUT);
    digitalWrite(C, LOW);
  }
}
