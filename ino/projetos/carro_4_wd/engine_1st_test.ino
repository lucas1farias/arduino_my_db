

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine2nd(2);
AF_DCMotor engine3rd(3);
AF_DCMotor engine4th(4);

void firstEngineTest() 
{
  for (int rept = 0; rept < 2; rept++) 
  {
    engine1st.setSpeed(fast);
    engine1st.run(BACKWARD);
    delay(quick); 
    engine1st.setSpeed(idle);
    engine1st.run(RELEASE); 
    delay(quick);
  }
}
