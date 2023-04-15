

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine2nd(2);
AF_DCMotor engine3rd(3);
AF_DCMotor engine4th(4);

// Motor traseiro -> (Referência: entrada fonte)
// Porta M2: esquerda=V ... direita=P
void secondEngineTestForward()
{
  engine2nd.setSpeed(255);
  engine2nd.run(FORWARD);
  delay(500);
  
  engine2nd.setSpeed(idle);
  engine2nd.run(RELEASE);
  delay(500);
}

void secondEngineTestBackward() 
{
  engine2nd.setSpeed(255);
  engine2nd.run(BACKWARD);
  delay(250);
  
  engine2nd.setSpeed(idle);
  engine2nd.run(RELEASE);
  delay(500);
}


void loop() {
  for (int rept = 0; rept < 2; rept++) 
  {
    secondEngineTestForward();
  }
  for (int rept = 0; rept < 2; rept++) 
  {
    secondEngineTestBackward();
  }
}