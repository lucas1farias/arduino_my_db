

/*
Define um período de duração de uma ação, antes de outra acontecer (que vêm abaixo)
*/

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  // 1 segundo pra ligar depois que desligou ao final
  delay(1000);
  // Ligado por 2 seg.
  digitalWrite(8, HIGH);
  delay(2000);
  // Desligado por 1/5 de seg.
  digitalWrite(8, LOW);
  delay(200);
  // Liga desliga imediatamente
  digitalWrite(8, HIGH);
  digitalWrite(8, LOW);
}
