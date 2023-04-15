

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine2nd(2);
AF_DCMotor engine3rd(3);
AF_DCMotor engine4th(4);

// Motor dianteiro <- (Referência: entrada fonte)
// Porta M4: esquerda=P ... direita=V
void fourthEngineTestForward() 
{
  engine4th.setSpeed(255);
  engine4th.run(FORWARD);
  delay(500); 
  
  engine4th.setSpeed(0);
  engine4th.run(RELEASE); 
  delay(500);
}

void fourthEngineTestBackward() 
{
  engine4th.setSpeed(255);
  engine4th.run(BACKWARD);
  delay(250); 

  engine4th.setSpeed(0);
  engine4th.run(RELEASE); 
  delay(500);
}

void loop()
{
  for (int rept = 0; rept < 4; rept++)
  {
    fourthEngineTestForward();
  }
  for (int rept = 0; rept < 4; rept++)
  {
    fourthEngineTestBackward();
  }
}