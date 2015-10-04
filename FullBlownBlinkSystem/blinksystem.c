#include  "filecmd.h"
#include <wiringPi.h>
#include <stdio.h>

  enum blinkstatetype
  {
    longlight,
    shortdark,
    longdark,
    shortlight,
    off,
  };
  enum blinkstatetype blinkstate = longlight;


int main(void)
{
  if (wiringPiSetup() == -1)
    return 1;

  pinMode(7, OUTPUT);

while(1)
	{
	switch (blinkstate){
	case longlight:
		digitalWrite(7,1);//turnon
		delay(300);//wait long
		if (readcmd()==1) 
			blinkstate = off;
		else
			blinkstate = shortdark;
		break;
	case shortdark:
		digitalWrite(7,0);//turnoff 
		delay(80);//wait short time
		blinkstate = longlight;
		break;
	case off:
		digitalWrite(7,0);//turnoff 
		if (readcmd()==2) 
			blinkstate = shortdark;
		delay(80);//wait 
		break;
	}

}
return 0;
}


