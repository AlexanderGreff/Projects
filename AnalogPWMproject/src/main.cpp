#include <Arduino.h>
#define CHANNEL 0
#define FREQUENCY 30
#define RESOLUTION 8

#define PIN_LED 2

void setup() {
  // Step 1: Configure the channel
  ledcSetup(CHANNEL, FREQUENCY, RESOLUTION);

  // Step 2: Attach the GPIO pin to the channel
  ledcAttachPin(PIN_LED, CHANNEL);
}

//8-bit resolution precision where 0 is 100% ON and 255 is OFF

void loop()
{
   for (int duty = 0; duty <= 255; duty += 5) //duty cycle increments by 5 each looping
   {
    ledcWrite(CHANNEL, duty); // Both LEDs will use the same PWM signal
    delay(10);
  }

  // Gradually decrease brightness
  for (int duty = 255; duty >= 0; duty -= 5) //same decrease rate, 1 each loop is too slow
  {
    ledcWrite(CHANNEL, duty); // Both LEDs will dim simultaneously
    delay(10);
  }
}

void loop1() 
{ //hard coded  8-bit duty cycle test
  // Step 3: Control the PWM signal
  ledcWrite(CHANNEL, 128); // 
  delay(5000);
  ledcWrite(CHANNEL, 0); // 100% duty cycle
  delay(3000);
}