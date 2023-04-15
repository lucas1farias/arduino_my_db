

// OBJETIVO || Acender um led em alguma das 13 portas GNC da Placa Arduino
// OBS      || Essa função é dependente de outra: pinMode()

void setup() {
  // Configurando a porta 13 p/ programar que ela receba uma saída
  pinMode(13, OUTPUT);
}

void loop() {
  // Execução da saída
  digitalWrite(13, HIGH);
  delay(250);
  digitalWrite(13, LOW);
}
