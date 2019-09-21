#include <stdio.h>
#include <stdlib.h>
#include <values.h>

int main(void)
{
  int   N, i, Fnum, Nnum, max;

  printf("Enter the number of elements:");
  scanf("%d", &N);
  
  if (N <= 0 || N >= MAXINT )
  {
     return
     printf("Invalid Input Given, N should only be between 1 to 2147483647 \n");
  }

  printf("Enter the first number:");
  scanf("%d", &Fnum);

  if (Fnum > 2147483647)
  {
     printf("Invalid input given");
     exit(1);
  }

  if (N == 1){
     return
     printf("Max:%d \n", Fnum);
  }
  max = Fnum;
  for (i = 1; i < N; i++ )
  {
     printf("Enter next number:");
     scanf("%d", &Nnum);
     if (Nnum > max)
	 max = Nnum;
  }
  printf("Max:%d \n", max );
  exit(0);

}
