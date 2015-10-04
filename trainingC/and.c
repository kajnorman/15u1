#include <stdio.h>
#include <wiringPi.h>


int main (void)
{

  printf ("Raspberry read input test\n") ;

  wiringPiSetup () ;
  pinMode (0, INPUT) ;
  pinMode (1, INPUT) ;
  pinMode (2, OUTPUT) ;
  pullUpDnControl (0,PUD_UP) ;
  pullUpDnControl (1,PUD_UP) ;

for(;;)
	{
		delay(1);

		if ((digitalRead(0) == 1) && (digitalRead(1) == 1))
			{
  			digitalWrite(2,1);
			}
		else
			{
  			digitalWrite(2,0);
			}


	}
  return 0 ;
}
