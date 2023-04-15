

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine2nd(2);
AF_DCMotor engine3rd(3);
AF_DCMotor engine4th(4);

void goForward(int spd, int duration)
{
  engine3rd.setSpeed(spd);
  engine3rd.run(FORWARD);
  engine4th.setSpeed(spd);
  engine4th.run(FORWARD);
  // engine1st.setSpeed(fast);
  // engine1st.run(FORWARD);
  engine2nd.setSpeed(spd);
  engine2nd.run(FORWARD);
  delay(duration);

  // engine1st.setSpeed(fast);
  // engine1st.run(RELEASE);
  engine2nd.setSpeed(idle);
  engine2nd.run(RELEASE);
  engine3rd.setSpeed(idle);
  engine3rd.run(RELEASE);
  engine4th.setSpeed(idle);
  engine4th.run(RELEASE);
  delay(250);
}

void loop() 
{
  goForward(255, 700);
}