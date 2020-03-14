#include <mbed.h>
DigitalOut myled(LED1);
DigitalOut myled2(LED2);
DigitalOut myled3(LED3);

int main()
{

  // put your setup code here, to run once:

  while(1) {
    // put your main code here, to run repeatedly:
    myled = 1;
    myled2 = 0;
    myled3 = 1;
    wait(0.5);
    myled = 0;
    myled2 = 1;
    myled3 = 0;
    wait(1.2);
   }
}