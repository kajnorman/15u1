#include <stdio.h>
#include <wiringPi.h>

// LED Pin - wiringPi pin 0 is BCM_GPIO 17.

#define	LED	2

int main (void)
{
  printf ("Raspberry Pi blink\n") ;

  wiringPiSetup () ;
  pinMode (LED, OUTPUT) ;

  for (;;)
  {
    digitalWrite (LED, HIGH) ;	// On
    printf ("Raspberry Pi NOW ON     ") ;
    delay (500) ;		// mS
    digitalWrite (LED, LOW) ;	// Off
    printf ("Raspberry Pi NOW OFF    ") ;
    delay (500) ;
  }
  return 0 ;
}
