#include "mbed.h"

DigitalOut myLED(LED1);
DigitalOut myLED2(LED3);

void Led3(DigitalOut &ledpin);
void Led2(DigitalOut &ledpin);

int main()
{
   myLED = 1;
   myLED2 = 1;
   while (true)
   {
      Led3(myLED2); 
      Led2(myLED);
   }
}