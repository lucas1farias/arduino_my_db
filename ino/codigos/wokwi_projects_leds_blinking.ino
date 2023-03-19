

int ledRed = 13;
int ledYellow = 12;
int ledGreen = 11;
int oneSec = 1000;
int quarterSec = 250;
int halfSec = 500;
char firstStep[] = "1) Ligou todos os leds!";
char secondStep[] = "2) Apagou todos os leds!";
char thirdStep[] = "3) Leds ligados na ordem: vermelho, amarelo, verde!";
char fourthStep[] = "4) Leds ligados na ordem: amarelo, vermelho,  verde!";
char fifthStep[] = "5) Leds ligados na ordem: verde, amarelo, vermelho!";
char sixthStep[] = "6) Leds piscando juntos!";

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  Serial.begin(9600);
}

void turnOnAllLeds() {
  digitalWrite(ledRed, HIGH);
  digitalWrite(ledYellow, HIGH);
  digitalWrite(ledGreen, HIGH);
}

void turnOffAllLeds() {
  digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, LOW);
}

void redYellowGreen() {
  digitalWrite(ledRed, HIGH); delay(quarterSec); digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, HIGH); delay(quarterSec); digitalWrite(ledYellow, LOW);
  digitalWrite(ledGreen, HIGH); delay(quarterSec); digitalWrite(ledGreen, LOW);
}

void yellowRedGreen() {
  digitalWrite(ledYellow, HIGH); delay(quarterSec); digitalWrite(ledYellow, LOW);
  digitalWrite(ledRed, HIGH); delay(quarterSec); digitalWrite(ledRed, LOW);
  digitalWrite(ledGreen, HIGH); delay(quarterSec); digitalWrite(ledGreen, LOW);
}

void greenRedYellow() {
  digitalWrite(ledGreen, HIGH); delay(quarterSec); digitalWrite(ledGreen, LOW);
  digitalWrite(ledRed, HIGH); delay(quarterSec); digitalWrite(ledRed, LOW);
  digitalWrite(ledYellow, HIGH); delay(quarterSec); digitalWrite(ledYellow, LOW);
}

void loop() {
  turnOnAllLeds();
  delay(oneSec);
  Serial.println(firstStep);

  turnOffAllLeds();
  delay(oneSec);
  Serial.println(secondStep);

  redYellowGreen();
  delay(quarterSec);
  Serial.println(thirdStep);

  yellowRedGreen();
  delay(quarterSec);
  Serial.println(fourthStep);

  greenRedYellow();
  delay(quarterSec);
  Serial.println(fifthStep);

  int repetitions = random(25);

  Serial.println(sixthStep);

  for (int loop = 0; loop < repetitions; loop++) {
    turnOnAllLeds();
    delay(100);
    turnOffAllLeds();
    delay(100);
  }

}
