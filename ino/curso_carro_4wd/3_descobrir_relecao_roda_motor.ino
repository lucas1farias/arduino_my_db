

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine1st(2);
AF_DCMotor engine1st(3);
AF_DCMotor engine1st(4);

int fast = 255;
int idle = 0;
int sec = 1000;
char engine1msg[] = "Motor 1 em rotação";
char engine2msg[] = "Motor 2 em rotação";
char engine3msg[] = "Motor 3 em rotação";
char engine4msg[] = "Motor 4 em rotação";

void setup() {
  Serial.begin(9600);
  // OBJETIVO: Testar o giro em cada um dos 4 motores (brevemente)
  // OBJETIVO: Identificar qual roda gira
  // OBS:      O item anterior não é útil pois move duas rodas de uma vez, dificultando saber qual pertence a qual
  // OBS:      As funções aqui movem os motores isoladamente, ficando fácil identificar qual roda pertence a qual motor
  // OBS:      A função segue uma ordem lógica, girando espaçadamente os motores: 1, 2, 3 e 4
  // OBS:      Se observa qual roda gira e então, esta é assimilada ao motor
  // OBS:      Sabendo o motor e sua direção, é possível configurar corretamente as funções de curva

  // DESEJADO: Melhorar está função (exemplo: fazer cada motor girar qtds. != p/ entender em qual etapa o código está)
  // DESEJADO: Supondo que na função do motor 1, a roda seja colocada para girar 3 vezes, a detecção será mais eficaz
  // DESEJADO: Talvez colocar uma mensagem com (Serial.println) ao fim de cada função também seja interessante
}

void engine1Test() {
  Serial.println(engine1msg);
  // Levar 1 seg p/ fazer o motor 1 girar (girando a roda)
  engine1st.setSpeed(fast);
  engine1st.run(FORWARD);
  delay(sec);
  // Parar imediatamente após o o término
  engine1st.setSpeed(0);
  engine1st.run(RELEASE);
}

void engine2Test() {
  Serial.println(engine2msg);
  engine2nd.setSpeed(fast);
  engine2nd.run(FORWARD);
  delay(halfSec);
  engine2nd.setSpeed(0);
  engine2nd.run(RELEASE);
}

void engine3Test() {
  Serial.println(engine3msg);
  engine3rd.setSpeed(fast);
  engine3rd.run(BACKWARD);
  delay(halfSec);
  engine3rd.setSpeed(0);
  engine3rd.run(RELEASE);
}

  Serial.println(engine4msg);
  engine4th.setSpeed(fast);
  engine4th.run(BACKWARD);
  delay(halfSec);
  engine4th.setSpeed(0);
  engine4th.run(RELEASE);
}

void loop() {

}
