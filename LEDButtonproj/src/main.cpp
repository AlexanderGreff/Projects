#include <Arduino.h>
#define PIN_LED 2
#define PIN_BUTTON 13



void setup() 
{
  pinMode(PIN_LED, OUTPUT);
  pinMode(PIN_BUTTON, INPUT);
}

void loop() 
{
  if (digitalRead(PIN_BUTTON) == LOW) //reads the input signal received at PIN 13
  {
    digitalWrite(PIN_LED, LOW); //Sends a low at PIN 2
  }
  else
  {
    digitalWrite(PIN_LED, HIGH); //Sends a high at PIN 2
  }
}

void loop1()
{
// for (int i = 0; i < 5; i++)
  {
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED off (HIGH is the voltage level)
    delay(100);                      // wait for 100 ms
    digitalWrite(LED_BUILTIN, LOW);  // turn the LED on by making the voltage LOW
    delay(100);                      // wait for 100 ms
  }
}