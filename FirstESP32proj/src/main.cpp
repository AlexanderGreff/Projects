#include <Arduino.h>
/**********************************************************************
* Filename    : Blink
* Description : Make an led blinking.
* Auther      : www.freenove.com
* Modification: 2024/06/18
**********************************************************************/
#define LED_EXT  15
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(LED_EXT, OUTPUT);
}

// the loop function runs over and over again forever
void loop()
{
  digitalWrite(LED_EXT, HIGH); // turn the LED off (HIGH is the voltage level)
  for (int i = 0; i < 5; i++)
  {
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED off (HIGH is the voltage level)
    delay(100);                      // wait for 100 ms
    digitalWrite(LED_BUILTIN, LOW);  // turn the LED on by making the voltage LOW
    delay(100);                      // wait for 100 ms
  }
  digitalWrite(LED_EXT, LOW); // turn the LED off (HIGH is the voltage level)
  for (int i = 0; i < 5; i++)
  {
    digitalWrite(LED_BUILTIN, HIGH); // turn the LED off (HIGH is the voltage level)
    delay(100);                      // wait for 100 ms
    digitalWrite(LED_BUILTIN, LOW);  // turn the LED on by making the voltage LOW
    delay(100);                      // wait for 100 ms
  }
  
}

