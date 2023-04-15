



int redPin = 13;
int yellowPin = 12;
int greenPin = 11;
int aquaPin = 10;
int purplePin = 9;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(aquaPin, OUTPUT);
  pinMode(purplePin, OUTPUT);
}

void turnLed(int ledValue) {
  if (ledValue == 13) {
    digitalWrite(redPin, HIGH);
    delay(200);
    digitalWrite(redPin, LOW);
  } else if (ledValue == 12) {
    digitalWrite(yellowPin, HIGH);
    delay(200);
    digitalWrite(yellowPin, LOW);
  } else if (ledValue == 11) {
    digitalWrite(greenPin, HIGH);
    delay(200);
    digitalWrite(greenPin, LOW);
  } else if (ledValue == 10) {
    digitalWrite(aquaPin, HIGH);
    delay(200);
    digitalWrite(aquaPin, LOW);
  } else if (ledValue == 9) {
    digitalWrite(purplePin, HIGH);
    delay(200);
    digitalWrite(purplePin, LOW);
  }
}

void loop() {
  int pinId = random(14);
  int blinksAmount = random(3);
  for(int rept = 0; rept < blinksAmount; rept++) {
     turnLed(pinId);
  }
}
