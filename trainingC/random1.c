

#include <time.h>
#include <stdlib.h>
#include <stdio.h>


void  main(void)
{

srand(time(NULL));
int r = rand();

printf ("random value %d  \n",r);
printf ("max value %d  \n",RAND_MAX);



printf ("random value between 0-8 %d  \n",r%8);
int n;
for(n=0;n<100;n++) printf ("\t%d",rand()%8);


}
