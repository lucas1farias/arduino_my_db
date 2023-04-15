

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine2nd(2);
AF_DCMotor engine3rd(3);
AF_DCMotor engine4th(4);

void goRandom(int spd, int duration)
{
  int option = random(6);

  if (option == 0)
  {
    engine2nd.setSpeed(spd);
    engine2nd.run(BACKWARD);
    delay(duration);
  }
  else if (option == 1)
  {
    engine2nd.setSpeed(spd);
    engine2nd.run(FORWARD);
    delay(duration);
  }
  
  else if (option == 2)
  {
    engine3rd.setSpeed(spd);
    engine3rd.run(BACKWARD);
    delay(duration);
  }
  else if (option == 3)
  {
    engine3rd.setSpeed(spd);
    engine3rd.run(FORWARD);
    delay(duration);
  }
  else if (option == 4)
  {
    engine4th.setSpeed(spd);
    engine4th.run(BACKWARD);
    delay(duration);
  }
  else if (option == 5)
  {
    engine4th.setSpeed(spd);
    engine4th.run(FORWARD);
    delay(duration);
  }
}
