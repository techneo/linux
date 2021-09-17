#define _POSIX_C_SOURCE 200809L

#include <stdio.h>

int main(void)
{
  printf("regular message to stdout\n");

  /* using streams */
  fprintf(stdout,"Also a regular message to stdout \n");
 
  fprintf(stderr,"Error message to stderr\n");

  /*using file descriptor*/
  dprintf(1,"regular output using descriptor 1\n");
 
  dprintf(2, "error message using descriptor 2 \n");

  return 0;

}

