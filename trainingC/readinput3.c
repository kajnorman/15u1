#include <stdio.h>
#include <wiringPi.h>


int main (void)
{

  printf ("Raspberry read input test\n") ;

  wiringPiSetup () ;
  pinMode (0, INPUT) ;
  pinMode (2, OUTPUT) ;
  pullUpDnControl (0,PUD_UP) ;

for(;;)
	{
		delay(1);
		digitalWrite(2,digitalRead(0));

	}
  return 0 ;
}
