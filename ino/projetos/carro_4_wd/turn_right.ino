

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine2nd(2);
AF_DCMotor engine3rd(3);
AF_DCMotor engine4th(4);

void turnRight(int spd, int duration)
{
  engine3rd.setSpeed(spd);
  engine3rd.run(BACKWARD);
  engine4th.setSpeed(spd);
  engine4th.run(BACKWARD);
  //  engine1st.setSpeed(spd);
  //  engine1st.run(FORWARD);
  engine2nd.setSpeed(spd);
  engine2nd.run(FORWARD);
  delay(duration);
}
