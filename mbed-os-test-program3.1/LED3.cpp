#include "mbed.h"

void Led3(DigitalOut &ledpin)
{
   for (int i = 0; i < 6; ++i)
   {                     //blink for 3 times
      ledpin = !ledpin; // toggle led
      ThisThread::sleep_for(100ms);
   }
}