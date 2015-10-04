

#include <time.h>
#include <stdlib.h>
#include <stdio.h>


void  main(void)
{

srand(time(NULL));
int r = rand();

printf ("random value %d  \n",r);
printf ("max value %d  \n",RAND_MAX);

}
