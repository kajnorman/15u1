/*  utilities for process intercommunication
readcmd();  will read the  file cmd.txt
it will return  0 if the file does not exist
otherwise it will return the decimal value 1-9 as an integer
that corresponds to the  value read in the  cmd.txt
as the first char which has to be a  numeric char   

as part of making sure tat only one command comes throuhg
the function deletes the file.
*/


#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define CMD_FILE "/tmp/cmd.txt"

char readcmd(void)
{
   FILE *stream;
   int   ch;
   if( (stream = fopen( CMD_FILE, "r" )) == NULL )
      return 0;

   ch = fgetc( stream );
   fclose( stream );
   unlink(CMD_FILE);
   return (ch-'0');
}

