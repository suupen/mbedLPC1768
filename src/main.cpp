#include <mbed.h>
DigitalOut myled(LED1);
DigitalOut myled2(LED2);
int main()
{

  // put your setup code here, to run once:

  while(1) {
    // put your main code here, to run repeatedly:
    myled = 1;
    myled2 = 0;
    wait(0.5);
    myled = 0;
    myled2 = 1;
    wait(1.2);
    
  }
}