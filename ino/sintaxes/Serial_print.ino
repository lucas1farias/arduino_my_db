

// Strings devem vir acompanhadas de "[]"
char language[] = "C++";

void setup() {
  // Mandatório p/ informar ao Arduino (porta 9600 de prefixo TX na placa) que serão usados textos (porta)
  // Strings a serem usadas sempre têm a sintaxe: "texto" (aspas duplas)
  Serial.begin(9600);
}

void loop() {
  // A função pode receber strings literais
  Serial.print("Arduino");
  delay(1000);
  // Ou strings dentro de vars.
  Serial.print(language);
  delay(1000);
}
