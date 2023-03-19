

#include <AF_Motor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine1st(2);
AF_DCMotor engine1st(3);
AF_DCMotor engine1st(4);

int fast = 255;
int idle = 0;
int quarterSec = 250;
int sec = 1000;

void setup() {

}

void goForward() {
  engine1st.setSpeed(fast);
  engine1st.run(FORWARD);
  engine2nd.setSpeed(fast);
  engine2nd.run(FORWARD);
  delay(quarterSec);
  engine1st.setSpeed(idle);
  engine1st.run(RELEASE);
  engine2nd.setSpeed(idle);
  engine2nd.run(RELEASE);
}

void goBackward() {
  engine3rd.setSpeed(fast);
  engine3rd.run(BACKWARD);
  engine4th.setSpeed(fast);
  engine4th.run(BACKWARD);
  delay(quarterSec);
  engine3rd.setSpeed(idle);
  engine3rd.run(RELEASE);
  engine4th.setSpeed(idle);
  engine4th.run(RELEASE);
}

void loop() {
  goForward();
  delay(sec);
  goBackward();
}
