
#include <Arduino.h>

#define RED_PIN 4
// #define BLUE_PIN 5
#define WHITE_PIN 6

int blinkDelay = 500;

void blink(int pin, int n)
{
  for (int i = 0; i < n; i++)
  {
    digitalWrite(pin, HIGH);
    delay(blinkDelay);
    digitalWrite(pin, LOW);
    delay(blinkDelay);
  }
}

void setup()
{
  pinMode(RED_PIN, OUTPUT);
  // pinMode(BLUE_PIN, OUTPUT);
  pinMode(WHITE_PIN, OUTPUT);
}

void loop()
{
  blink(RED_PIN, 5);
  // blink(BLUE_PIN, 5);
  blink(WHITE_PIN, 5);
}