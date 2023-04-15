

// Gera um número inteiro de 0 até o valor passado no parâmetro - 1

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(1000);
  // Valor do parâmetro é NÃO INCLUSIVO (portanto: 0 a 1)
  int randomValue = random(2);
  Serial.print(randomValue);
  Serial.print(" ");
}
