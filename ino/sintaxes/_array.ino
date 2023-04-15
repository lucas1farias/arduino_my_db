

/*
1. É preciso passar o tipo dos dados que estarão no array
2. Nos parênteses, é preciso dizer a qtd. de índices no array
3. A array pode ser acessado via índice: nomeDoArray[int]
*/

int values[5] = {11, 47, 2, 92, 55};
// Falhou: char indents[15] = {" ", "  ", "   ", "    ", "     "};
char indents[9] = {1, 2, 3, 4, 5};

void setup() {
  Serial.begin(9600);
}

void loop() {
  int i = random(5);
  int thisIndex = random(5);
  int indentLevel = indents[thisIndex];

  Serial.print(values[i]);

  if (indentLevel == 1) {
    Serial.print(" ");
  } else if (indentLevel == 2) {
    Serial.print("  ");
  } else if (indentLevel == 3) {
    Serial.print("   ");
  } else if (indentLevel == 4) {
    Serial.print("    ");
  } else {
    Serial.print("     ");
  }

  delay(25);
}

// =============================================== EXEMPLO 2 ===============================================
int rootNumbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int rootNumbersLen = 9;

void setup() {
  Serial.begin(9600); 
}

void loop() {
  int randomIndex = random(rootNumbersLen);
  Serial.print("Índice escolhido ");
  Serial.print(" ");
  Serial.print(randomIndex);
  Serial.println();
  delay(500);
}
