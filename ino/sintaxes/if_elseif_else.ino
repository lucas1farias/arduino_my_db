

// As condições em Arduino são idênticas as de Javascript

char nmb1[] = "A opção 1 foi escolhida";
char nmb2[] = "A opção 2 foi escolhida";
char nmb3[] = "A opção 3 foi escolhida";
char nmb4[] = "A opção 4 foi escolhida";

void setup() {
  Serial.begin(9600);
}

int provideInteger(int n) {
  if (n == 1) {
    Serial.println(nmb1);
  } else if (n == 2) {
    Serial.println(nmb2);
  } else if (n == 3) {
    Serial.println(nmb3);
  } else {
    Serial.println(nmb4);
  }
}

void loop() {
  // Passando p/ a função "provideInteger" um inteiro entre 1 a 4 p/ receber strings !=
  int randomNumber = random(4);
  provideInteger(randomNumber);
  delay(2000);
}
