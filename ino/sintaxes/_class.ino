

// ============================================== EXEMPLO 1 ==============================================
class LedLight {
  public:

    void config(int ledId) {
      pinMode(ledId, OUTPUT);
    }

    void blink(int ledId, int duration) {
      digitalWrite(ledId, HIGH);
      delay(duration);
      digitalWrite(ledId, LOW);
    }
};

LedLight redLed;
LedLight yellowLed;
LedLight greenLed;
int red = 13;
int yellow = 12;
int green = 11;

void setup() {
  redLed.config(red);
  yellowLed.config(yellow);
  greenLed.config(green);
}

void loop() {
  int blinkDurationRedLed = random(1001);
  int blinkDurationYellowLed = random(1001);
  int blinkDurationGreenLed = random(1001);
  int duration = random(1001);
  int ledId = random(4);

  if (ledId == 0) {
    redLed.blink(red, blinkDurationRedLed);
  } else if (ledId == 1) {
    yellowLed.blink(yellow, blinkDurationYellowLed);
  } else if (ledId == 2) {
    greenLed.blink(green, blinkDurationGreenLed);
  } else {
    redLed.blink(red, blinkDurationRedLed);
    yellowLed.blink(yellow, blinkDurationYellowLed);
    greenLed.blink(green, blinkDurationGreenLed);
  }

}

// ============================================== EXEMPLO 2 ==============================================
// Não possui atributos usáveis em "private"
class Calculator {
  private:

  public:

    float add(float n1, float n2) {
      return n1 + n2;
    }

    float subtract(float n1, float n2) {
      return n1 - n2;
    }

    float multiply(float n1, float n2) {
      return n1 * n2;
    }

    float divide(float n1, float n2) {
      return n1 / n2;
    }
};

Calculator calculator;

void setup() {
  Serial.begin(9600);
  float operationAdd = calculator.add(7, 3);
  float operationSubtract = calculator.subtract(7, 3);
  float operationMultiply = calculator.multiply(7, 3);
  float operationDivide = calculator.divide(7, 3);
  Serial.println(operationAdd);
  Serial.println(operationSubtract);
  Serial.println(operationMultiply);
  Serial.println(operationDivide);
}

void loop() {
  
}

// ============================================== EXEMPLO 3 ==============================================
// Com atributos usáveis em "private"
class Calculator {
  private:
    float n1;
    float n2;
    
  public:
    // Equivalente: def __init__ (python) e constructor (JS)
    Calculator() {
      float n1 = 0;
      float n2 = 0;
    }

    float add(float v1, float v2) {
      // Os parâmetros/atribs. da classe são chamáveis nas funções da classe
      n1 = v1;
      n2 = v2;
      return n1 + n2;
    }
};

Calculator calculator;

void setup() {
  Serial.begin(9600);
  float operationAdd = calculator.add(7, 3);
  float operationSubtract = calculator.subtract(7, 3);
  float operationMultiply = calculator.multiply(7, 3);
  float operationDivide = calculator.divide(7, 3);
  Serial.println(operationAdd);
  Serial.println(operationSubtract);
  Serial.println(operationMultiply);
  Serial.println(operationDivide);
}

void loop() {
  
}