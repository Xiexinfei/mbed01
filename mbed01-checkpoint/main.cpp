#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

void Led3times(DigitalOut &ledpin);
void Led2times(DigitalOut &ledpin);

int main()
{
   myLED = 1;
   myLED2 = 1;
   while (true)
   {
      Led3times(myLED2); 
      Led2times(myLED);
   }
}