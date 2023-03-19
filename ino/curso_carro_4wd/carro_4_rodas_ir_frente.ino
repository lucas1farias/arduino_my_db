

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

void allEnginesForward() {
  // Ativar o movimento frontal em todos os motores simultaneamente
  engine1st.setSpeed(fast);
  engine1st.run(FORWARD);

  engine2nd.setSpeed(fast);
  engine2nd.run(FORWARD);

  engine3rd.setSpeed(fast);
  engine3rd.run(FORWARD);

  engine4th.setSpeed(fast);
  engine4th.run(FORWARD);
}

void loop() {
  allEnginesForward();
}
