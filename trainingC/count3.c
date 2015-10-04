#include <stdio.h>
#include <wiringPi.h>

int counts=0;



int main (void)
{

  printf ("Raspberry count test\n") ;

  wiringPiSetup () ;
  pinMode (0, INPUT) ;
  pullUpDnControl (0,PUD_UP) ;

for(;;)
	{

		while (digitalRead(0) == 1)//Pin 0 will set pin 2
			{
			delay(1);//not to overload  when running this program
  			// do nothing.. wait for someone to press
			}
		while (digitalRead(0) == 0)//Pin 0 will set pin 2
			{
			delay(1);//not to overload  when running this program
  			// do nothing.. wait for someone to release again
			}
		printf("press %d detected\n",++counts);


	}
  return 0 ;
}
