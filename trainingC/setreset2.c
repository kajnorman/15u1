#include <stdio.h>
#include <wiringPi.h>


int main (void)
{

  printf ("Raspberry sr latch (inverse input logic)\n") ;

  wiringPiSetup () ;
  pinMode (0, INPUT) ;
  pinMode (1, INPUT) ;
  pinMode (2, OUTPUT) ;
  pullUpDnControl (0,PUD_UP) ;
  pullUpDnControl (1,PUD_UP) ;

for(;;)
	{
		delay(1);//not to overload  when running this program

		if (digitalRead(0) == 0)//Pin 0 will set pin 2
			{
  			digitalWrite(2,1);
			}
		if (digitalRead(1) == 0)//Pin 1 will reset pin 2
			{
  			digitalWrite(2,0);
			}


	}
  return 0 ;
}
