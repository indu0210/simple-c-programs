#include <stdio.h>
#include <stdlib.h>

int reverse(int);

int main(int argc, char *argv[])
{
  if (argc != 2)
  {
    fprintf(stderr, "bulbuli \n");
    exit(1);
  }

  printf("reverse of %d is %d\n", atoi(argv[1]), reverse(atoi(argv[1])));
}

int reverse(int num)
{
  int rem, res = 0;

  while (num != 0)
  {
    rem = num % 10;
    res = (res * 10) + rem; 
    num = num / 10;
  }

  return res;
}
