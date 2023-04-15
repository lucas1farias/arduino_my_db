

#include <AFMotor.h>
AF_DCMotor engine1st(1);
AF_DCMotor engine2nd(2);
AF_DCMotor engine3rd(3);
AF_DCMotor engine4th(4);

int fast = 255;
int idle = 0;
int controls[] = {
    10, 20, 30,
    40, 50, 60,
    70, 80, 90,
    1, 2, 3, 4, 5, 6, 7};
int delaysBasic[] = {222, 333, 444, 555, 666, 777, 888, 999, 1111, 1222};
int delaysNormal[] = {1333, 1444, 1555, 1666, 1777, 1888, 1999, 2111, 2222};
int delaysLonger[] = {2333, 2444, 2555, 2666, 2777, 2888, 2999, 3111, 3222};

int getIndexBool(bool source[], int sourceLen)
{
  int index = random(sourceLen);
  return source[index];
}

int getIndex(int source[], int sourceLen)
{
  int index = random(sourceLen);
  return source[index];
}

void moveHalfPotency(AF_DCMotor engineFirst, AF_DCMotor engineSecond, int duration, char where)
{
  int fast = 255;
  int idle = 0;

  if (where == 'frente')
  {
    engineFirst.setSpeed(fast);
    engineFirst.run(FORWARD);
    engineSecond.setSpeed(fast);
    engineSecond.run(FORWARD);
    delay(duration);
    engineFirst.setSpeed(idle);
    engineFirst.run(RELEASE);
    engineSecond.setSpeed(idle);
    engineSecond.run(RELEASE);
    delay(25);
  }
  else
  {
    engineFirst.setSpeed(fast);
    engineFirst.run(BACKWARD);
    engineSecond.setSpeed(fast);
    engineSecond.run(BACKWARD);
    delay(duration);
    engineFirst.setSpeed(idle);
    engineFirst.run(RELEASE);
    engineSecond.setSpeed(idle);
    engineSecond.run(RELEASE);
    delay(25);
  }
}

void goBackward(
  AF_DCMotor engineFirst, 
  AF_DCMotor engineSecond, 
  AF_DCMotor engineThird, 
  AF_DCMotor engineFourth, 
  int spd, 
  int duration
  )
{

  //  engineFirst.setSpeed(fast);
  //  engineFirst.run(FORWARD);
  engineSecond.setSpeed(spd);
  engineSecond.run(BACKWARD);
  engineThird.setSpeed(spd);
  engineThird.run(BACKWARD);
  engineFourth.setSpeed(spd);
  engineFourth.run(BACKWARD);
  delay(duration);

  //  engineFirst.setSpeed(fast);
  //  engineFirst.run(RELEASE);
  engineSecond.setSpeed(idle);
  engineSecond.run(RELEASE);
  engineThird.setSpeed(idle);
  engineThird.run(RELEASE);
  engineFourth.setSpeed(idle);
  engineFourth.run(RELEASE);
  delay(50);
}

void goForward(
  AF_DCMotor engineFirst, 
  AF_DCMotor engineSecond, 
  AF_DCMotor engineThird, 
  AF_DCMotor engineFourth, 
  int spd, 
  int duration
)
{
  engineThird.setSpeed(spd);
  engineThird.run(FORWARD);
  engineFourth.setSpeed(spd);
  engineFourth.run(FORWARD);
  // engineFirst.setSpeed(fast);
  // engineFirst.run(FORWARD);
  engineSecond.setSpeed(spd);
  engineSecond.run(FORWARD);
  delay(duration);

  // engineFirst.setSpeed(fast);
  // engineFirst.run(RELEASE);
  engineSecond.setSpeed(idle);
  engineSecond.run(RELEASE);
  engineThird.setSpeed(idle);
  engineThird.run(RELEASE);
  engineFourth.setSpeed(idle);
  engineFourth.run(RELEASE);
  delay(50);
}

void turnLeft(
  AF_DCMotor engineFirst, 
  AF_DCMotor engineSecond,
  int spd, 
  int duration
  )
{
  // Este é o comando
  engineFirst.setSpeed(spd);
  engineFirst.run(FORWARD);
  engineSecond.setSpeed(spd);
  engineSecond.run(FORWARD);
  delay(duration);
  // Caso precise que pare
  engineFirst.setSpeed(idle);
  engineFirst.run(RELEASE);
  engineSecond.setSpeed(idle);
  engineSecond.run(RELEASE);
  delay(50);
}

void turnLeftBackward(AF_DCMotor engineFirst, AF_DCMotor engineSecond,int spd, int duration)
{
  // Este é o comando
  engineFirst.setSpeed(spd);
  engineFirst.run(BACKWARD);
  engineSecond.setSpeed(spd);
  engineSecond.run(BACKWARD);
  delay(duration);
  // Caso precise que pare
  engineFirst.setSpeed(idle);
  engineFirst.run(RELEASE);
  engineSecond.setSpeed(idle);
  engineSecond.run(RELEASE);
  delay(50);
}

void turnRightAlternative(AF_DCMotor engineFirst, AF_DCMotor engineSecond,int spd, int duration)
{
  engineFirst.setSpeed(255);
  engineFirst.run(BACKWARD);
  engineSecond.setSpeed(spd);
  engineSecond.run(FORWARD);
  delay(duration);

  engineFirst.setSpeed(idle);
  engineFirst.run(RELEASE);
  engineSecond.setSpeed(idle);
  engineSecond.run(RELEASE);
  delay(50);
}

void goRandom(
  AF_DCMotor engineFirst, 
  AF_DCMotor engineSecond, 
  AF_DCMotor engineThird, 
  AF_DCMotor engineFourth, 
  int spd, 
  int duration
  )
{
  int option = random(6);
  bool commands[] = {true, false};
  int order = getIndexBool(commands, 2);

  if (option == 0)
  {
    engineSecond.setSpeed(spd);
    engineSecond.run(BACKWARD);
    delay(duration);

    // -------------------------------------------------------------------------------------------------------------------------------------------------------------
    if (order == true)
    {
      goForward(engineFirst, engineSecond, engineThird, engineFourth, spd, duration);
    }
  }
  else if (option == 1)
  {
    engineSecond.setSpeed(spd);
    engineSecond.run(FORWARD);
    delay(duration);

    // -------------------------------------------------------------------------------------------------------------------------------------------------------------
    if (order == true)
    {
      goBackward(engineFirst, engineSecond, engineThird, engineFourth, spd, duration);
    }
  }

  else if (option == 2)
  {
    engineThird.setSpeed(spd);
    engineThird.run(BACKWARD);
    delay(duration);

    // -------------------------------------------------------------------------------------------------------------------------------------------------------------
    if (order == true)
    {
      turnLeft(engine2nd, engine3rd, spd, duration);
    }
  }
  else if (option == 3)
  {
    engineFourth.setSpeed(spd);
    engineFourth.run(FORWARD);
    delay(duration);

    // -------------------------------------------------------------------------------------------------------------------------------------------------------------
    if (order == true)
    {
      turnLeftBackward(engine2nd, engine3rd, spd, duration);
    }
  }
  else if (option == 4)
  {
    engineFourth.setSpeed(spd);
    engineFourth.run(BACKWARD);
    delay(duration);

    // -------------------------------------------------------------------------------------------------------------------------------------------------------------
    if (order == true)
    {
      turnRightAlternative(engine3rd, engine4th, spd, duration);
    }
  }
  else if (option == 5)
  {
    engineFourth.setSpeed(spd);
    engineFourth.run(FORWARD);
    delay(duration);
  }
}

void setup()
{
}

void loop()
{
  // Controladores que definem a duração das ações no loop
  int option = getIndex(controls, 14);
  int shorter = getIndex(delaysBasic, 10);
  int average = getIndex(delaysNormal, 9);
  int longer = getIndex(delaysLonger, 9);
  
  // Define qual variação entre os motores será executado (12 combinações)
  int decision = random(12);

  if (decision == 0)
  {
    moveHalfPotency(engine1st, engine2nd, shorter, 'frente');
  }
  else if (decision == 1)
  {
    moveHalfPotency(engine1st, engine2nd, shorter, 'trás');
  }
  else if (decision == 2)
  {
    moveHalfPotency(engine3rd, engine4th, shorter, 'frente');
  }
  else if (decision == 3)
  {
    moveHalfPotency(engine3rd, engine4th, shorter, 'trás');
  }
  else if (decision == 4)
  {
    moveHalfPotency(engine2nd, engine3rd, shorter, 'frente');
  }
  else if (decision == 5)
  {
    moveHalfPotency(engine2nd, engine3rd, shorter, 'trás');
  }
  else if (decision == 6)
  {
    moveHalfPotency(engine2nd, engine4th, shorter, 'frente');
  }
  else if (decision == 7)
  {
    moveHalfPotency(engine2nd, engine4th, shorter, 'trás');
  }
  else if (decision == 8)
  {
    moveHalfPotency(engine1st, engine3rd, shorter, 'frente');
  }
  else if (decision == 9)
  {
    moveHalfPotency(engine1st, engine3rd, shorter, 'trás');
  }
  else if (decision == 10)
  {
    moveHalfPotency(engine1st, engine4th, shorter, 'frente');
  }
  else if (decision == 11)
  {
    moveHalfPotency(engine1st, engine4th, shorter, 'trás');
  }

  // Outros movimentos
  if (option == 10 || option == 20 || option == 30)
  {
    goForward(engine1st, engine2nd, engine3rd, engine4th,fast, average);
  }
  else if (option == 40 || option == 50 || option == 60)
  {
    goBackward(engine1st, engine2nd, engine3rd, engine4th, fast, average);
  }
  else if (option == 70)
  {
    turnLeft(engine2nd, engine3rd, fast, longer);
  }
  else if (option == 80)
  {
    turnLeftBackward(engine2nd, engine3rd, fast, longer);
  }
  else if (option == 90)
  { 
    turnRightAlternative(engine3rd, engine4th, fast, longer);
  }
  else
  {
    goRandom(engine1st, engine2nd, engine3rd, engine4th, fast, shorter);
  }
}
