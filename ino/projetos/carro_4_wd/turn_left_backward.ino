

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine2nd(2);
AF_DCMotor engine3rd(3);
AF_DCMotor engine4th(4);

void turnLeftBackward(int spd, int duration)
{
  // Este é o comando
  engine2nd.setSpeed(spd);
  engine2nd.run(BACKWARD);
  engine3rd.setSpeed(spd);
  engine3rd.run(BACKWARD);
  delay(duration);
  // Caso precise que pare
  engine2nd.setSpeed(idle);
  engine2nd.run(RELEASE);
  engine3rd.setSpeed(idle);
  engine3rd.run(RELEASE);
  delay(duration);
}

void turnLeftBackwardWay2(int spd) 
{
  engine2nd.setSpeed(spd);
  engine2nd.run(BACKWARD);
  engine3rd.setSpeed(spd);
  engine3rd.run(BACKWARD);
  engine4th.setSpeed(spd);
  engine4th.run(FORWARD);
  delay(3000);  
}
