#include<stdio.h>
#include<stdlib.h>

int  main(void)
{
  int      N, i, firstNum, secondNum, nextNum;

  printf("Enter the number of fibonacci numbers you want to diaplay:");
  scanf("%d", &N);

  firstNum = 0;
  secondNum = 1;
  if (N <= 0)
  {
       printf("Invalid number given, Valid numbers are only from 1 \n");
       exit(1);
  }

  else if (N == 1)
  {
       printf("%d \n", firstNum);
       exit(1);
  }
else{
  printf("%d %d ", firstNum, secondNum);
  for (i = 2; i < N; i++)
  {
       nextNum = firstNum + secondNum;
       firstNum = secondNum;
       secondNum = nextNum;
       if (nextNum < 0)
       {
          printf(" \n");
          printf(" The terms in the sequence exceeded the range \n");
          exit(0);
       }
       printf("%d ", nextNum);
  }
}
  printf("\n");
}
