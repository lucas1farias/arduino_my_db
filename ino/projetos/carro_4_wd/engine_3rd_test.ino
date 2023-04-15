

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine2nd(2);
AF_DCMotor engine3rd(3);
AF_DCMotor engine4th(4);

// Motor dianteiro -> (Referência: entrada fonte)
// Porta M3: esquerda=V ... direita=P
void thirdEngineTestForward()
{
  engine3rd.setSpeed(255);
  engine3rd.run(FORWARD);
  delay(500);

  engine3rd.setSpeed(0);
  engine3rd.run(RELEASE);
  delay(500);
}

void thirdEngineTestBackward()
{
  engine3rd.setSpeed(255);
  engine3rd.run(BACKWARD);
  delay(250);

  engine3rd.setSpeed(0);
  engine3rd.run(RELEASE);
  delay(500);
}

void loop()
{
  for (int rept = 0; rept < 3; rept++)
  {
    thirdEngineTestForward();
  }
  for (int rept = 0; rept < 3; rept++)
  {
    thirdEngineTestBackward();
  }
}