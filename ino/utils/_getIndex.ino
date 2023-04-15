

int rootNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

int getIndex(int source[], int sourceLen) {
  int index = random(sourceLen);
  return source[index];
}

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(getIndex(rootNumbers, 9));
  delay(500);
}
