

#include <AFMotor.h>

// OBJETOS
AF_DCMotor engine1st(1);
AF_DCMotor engine2nd(2);
AF_DCMotor engine3rd(3);
AF_DCMotor engine4th(4);

// VARIÁVEIS
int fast = 255;
int idle = 0;
int durationsShorter[] = {100, 300, 500, 700};
int durations[] = {1000, 2000, 3000, 4000, 5000};
String orders[] =
{
  "ir p/ frente", "ir p/ trás", "ir p/ frente", "ir p/ trás", "ir p/ frente", "ir p/ trás",
  "dobrar esquerda", "dobrar direita limitado",
  "ré esquerda",  "ré direita"
};

float createFloat()
{
  float randomFloat = random(100) / 100.0;
  return randomFloat;
}

int getIndexList(int sourceArray[], int arrayLength)
{
  int index = random(arrayLength);
  return sourceArray[index];
}

String getIndexStr(String sourceArray[], int arrayLength)
{
  int index = random(arrayLength);
  return sourceArray[index];
}

void moveHalfPotency(AF_DCMotor engineFirst, AF_DCMotor engineSecond, int duration, String direction)
{
  int fast = 255;
  int idle = 0;

  if (direction == "frente")
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
    delay(10);
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
    delay(10);
  }
}

void move(
    AF_DCMotor engine1, AF_DCMotor engine2, AF_DCMotor engine3, AF_DCMotor engine4,
    int speedStart,
    int speedEnd,
    int duration,
    String orientation)
{
  if (orientation == "frente")
  {
    engine2.setSpeed(speedStart);
    engine2.run(FORWARD);
    engine3.setSpeed(speedStart);
    engine3.run(FORWARD);
    engine4.setSpeed(speedStart);
    engine4.run(FORWARD);
    delay(duration);

    engine2.setSpeed(speedEnd);
    engine2.run(RELEASE);
    engine3.setSpeed(speedEnd);
    engine3.run(RELEASE);
    engine4.setSpeed(speedEnd);
    engine4.run(RELEASE);
    delay(10);
  }
  else
  {
    engine1.setSpeed(speedStart);
    engine1.run(BACKWARD);
    engine2.setSpeed(speedStart);
    engine2.run(BACKWARD);
    engine3.setSpeed(speedStart);
    engine3.run(BACKWARD);
    engine4.setSpeed(speedStart);
    engine4.run(BACKWARD);
    delay(duration);

    engine1.setSpeed(speedEnd);
    engine1.run(RELEASE);
    engine2.setSpeed(speedEnd);
    engine2.run(RELEASE);
    engine3.setSpeed(speedEnd);
    engine3.run(RELEASE);
    engine4.setSpeed(speedEnd);
    engine4.run(RELEASE);
    delay(10);
  }
}

void turnLeft(AF_DCMotor engineFirst, AF_DCMotor engineSecond, int spd, int duration)
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
  delay(10);
}

void turnBackward(AF_DCMotor engineFirst, AF_DCMotor engineSecond, int spd, int duration)
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
  delay(10);
}

void turnRightLimited(AF_DCMotor engineFirst, AF_DCMotor engineSecond, int spd, int duration)
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
  delay(10);
}

void setup()
{
  randomSeed(analogRead(0));
}

void loop()
{
  float randomNumber = createFloat();
  int randomDuration = getIndexList(durations, 5);
  int randomDurationShorter = getIndexList(durationsShorter, 5);
  String order = getIndexStr(orders, 7);
  int duration = randomDuration * randomNumber;
  int durationShorter = randomDurationShorter * randomNumber;
  int engineVariation = random(12);

  if (order == "ir p/ frente")
  {
    move(engine1st, engine2nd, engine3rd, engine4th, fast, idle, duration, "frente");
  }
  else if (order == "ir p/ trás")
  {
    move(engine1st, engine2nd, engine3rd, engine4th, fast, idle, duration, "trás");
  }
  else if (order == "dobrar esquerda")
  {
    turnLeft(engine2nd, engine3rd, fast, duration);
  }
  else if (order == "dobrar direita limitado")
  {
    // "TurnRightLimited" é uma gambiarra e só existe pelo fato do motor 1 estar danificado p/ frente 
    // Caso contrário, "turnLeft" poderia se tornar "turn" e só quem mudaria seriam os motores
    // Esquerda: engine2nd + engine3rd ... Direita: engine1st + engine4th
    turnRightLimited(engine3rd, engine4th, fast, duration);
  }
  else if (order == "ré esquerda")
  {
    turnBackward(engine2nd, engine3rd, fast, duration);
  }
  else if (order == "ré direita")
  {
    turnBackward(engine1st, engine4th, fast, duration);
  }

  // Miscelânia
  if (engineVariation == 0)
  {
    moveHalfPotency(engine1st, engine2nd, durationShorter, "frente");
  }
  else if (engineVariation == 1)
  {
    moveHalfPotency(engine1st, engine2nd, durationShorter, "trás");
  }
  else if (engineVariation == 2)
  {
    moveHalfPotency(engine3rd, engine4th, durationShorter, "frente");
  }
  else if (engineVariation == 3)
  {
    moveHalfPotency(engine3rd, engine4th, durationShorter, "trás");
  }
  else if (engineVariation == 4)
  {
    moveHalfPotency(engine2nd, engine3rd, durationShorter, "frente");
  }
  else if (engineVariation == 5)
  {
    moveHalfPotency(engine2nd, engine3rd, durationShorter, "trás");
  }
  else if (engineVariation == 6)
  {
    moveHalfPotency(engine2nd, engine4th, durationShorter, "frente");
  }
  else if (engineVariation == 7)
  {
    moveHalfPotency(engine2nd, engine4th, durationShorter, "trás");
  }
  else if (engineVariation == 8)
  {
    moveHalfPotency(engine1st, engine3rd, durationShorter, "frente");
  }
  else if (engineVariation == 9)
  {
    moveHalfPotency(engine1st, engine3rd, durationShorter, "trás");
  }
  else if (engineVariation == 10)
  {
    moveHalfPotency(engine1st, engine4th, durationShorter, "frente");
  }
  else if (engineVariation == 11)
  {
    moveHalfPotency(engine1st, engine4th, durationShorter, "trás");
  }

}
