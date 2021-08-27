#include <stdio.h>
#include <stdlib.h>

void printhelp(char progname[] );

int main(int argc, char *argv[])
{
  int i;
  int sum =0;

  if (argc ==1)
  {
    printhelp(argv[0]);
    return 1;
  }
  for (i=1; i<argc; i++)
  {
     printf ("%s ",argv[i]);
     sum = sum + atoi(argv[i]);
  }
  printf("Sum =%d",sum);
}

void printhelp(char progname[])
{
  printf("%s integer ...\n", progname);
  printf("This prog take many numbers");
}
