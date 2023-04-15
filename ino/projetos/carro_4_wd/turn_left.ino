

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine2nd(2);
AF_DCMotor engine3rd(3);
AF_DCMotor engine4th(4);

void turnLeft(int spd, int duration)
{
  // Este é o comando
  engine2nd.setSpeed(spd);
  engine2nd.run(FORWARD);
  engine3rd.setSpeed(spd);
  engine3rd.run(FORWARD);
  delay(duration);
  // Caso precise que pare
  engine2nd.setSpeed(idle);
  engine2nd.run(RELEASE);
  engine3rd.setSpeed(idle);
  engine3rd.run(RELEASE);
  delay(duration);
}
