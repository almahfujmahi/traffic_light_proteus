int redLED = 2;
int yellowLED = 3;
int greenLED = 4;
void setup() {
  pinMode(redLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(greenLED, OUTPUT);
}

void loop() {
  digitalWrite(greenLED, HIGH);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);
  delay(5000);
  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, HIGH);
  delay(2000);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, HIGH);
  delay(5000);
}
