#include <Arduino.h>

byte ledPins[] = {15,2,0,4,5,18,19,21,22,23};
int ledCounts;

void setup() 
{
  ledCounts = sizeof(ledPins);
  for (int i = 0; i < ledCounts; i++)
  {
    pinMode(ledPins[i], OUTPUT); //manually configures pin mode for each pin to be an output
  }
}

void loop() 
{
  for (int i = 0; i < ledCounts; i++)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW); //comment out this line to make it a bar that fills to 100%, then empties to zero :)
  }
  for (int i = ledCounts - 1; i > -1; i--)
  {
    digitalWrite(ledPins[i], HIGH);
    delay(100);
    digitalWrite(ledPins[i], LOW);
  }
}

