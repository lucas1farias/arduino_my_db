

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine1st(2);
AF_DCMotor engine1st(3);
AF_DCMotor engine1st(4);

int fast = 255;
int idle = 0;
int sec = 1000;

void setup() {

}

void allEnginesBackward() {
  // Ativar o movimento de retorno em todos os motores simultaneamente
  engine1st.setSpeed(fast);
  engine1st.run(BACKWARD);

  engine2nd.setSpeed(fast);
  engine2nd.run(BACKWARD);

  engine3rd.setSpeed(fast);
  engine3rd.run(BACKWARD);

  engine4th.setSpeed(fast);
  engine4th.run(BACKWARD);
}

void loop() {
  allEnginesBackward();
}
