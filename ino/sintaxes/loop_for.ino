

char langPython[] = "Python    ";
char langArduino[] = "Arduino    ";
char langC[] = "C++    ";

void setup() {
  Serial.begin(9600);
}

void showLang(int langValue) {
  if (langValue == 1) {
    Serial.print(langPython);
  } else if (langValue == 2) {
    Serial.print(langArduino);
  } else if (langValue == 3) {
    Serial.print(langC);
  }
}

void loop() {
  int repetitions = random(8);
  int amount = random(4);

  for (int rept = 0; rept < repetitions; rept++) {
    showLang(amount);
    delay(100);
  }
}
