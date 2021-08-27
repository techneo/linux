#define _XOPEN_SOURCE 500
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
void printhelp(char progname[]);

int main(int argc, char *argv[])
{
  int i, opt, sum;
  /* Simple sanity check */
  if (argc == 1)
  {
    printhelp(argv[0]);
    return 1;
  }
}


void printhelp(char progname[])
{
  printf("new printhelp\n");
}