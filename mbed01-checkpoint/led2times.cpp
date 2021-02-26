#include "mbed.h"

void Led2times(DigitalOut &ledpin)
{
   for (int i = 0; i < 2; ++i)
   {                     //blink for 2 times
      ledpin = !ledpin; // toggle led
      ThisThread::sleep_for(100ms);
   }
}