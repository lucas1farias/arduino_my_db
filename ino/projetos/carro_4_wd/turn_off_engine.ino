

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine2nd(2);
AF_DCMotor engine3rd(3);
AF_DCMotor engine4th(4);

void enginesOff(int spd, int duration)
{
  //  engine1st.setSpeed(idle);
  //  engine1st.run(RELEASE);
  engine2nd.setSpeed(idle);
  engine2nd.run(RELEASE);
  engine3rd.setSpeed(idle);
  engine3rd.run(RELEASE);
  engine4th.setSpeed(idle);
  engine4th.run(RELEASE);
  delay(duration);
}
