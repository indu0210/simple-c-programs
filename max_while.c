#include<stdio.h>

int main(void)
{
  int  i, Fnum, Nnum, max;
  
  printf("Enter the first number:");
  scanf("%d", &Fnum);
  if (Fnum > 2147483647 || Fnum == -1 )
  {
      printf("Invalid input, valid input is only from 1 to 2147483647 \n" );
  }
  max = Fnum;
  i = 1;
  while (Nnum != -1)
  {
     printf("Enter next number:");
     scanf("%d",&Nnum);
     if (Nnum > 2147483647)
     {
        printf("given invalid number \n");
     }
     else if(Nnum > max)
     {
	max = Nnum;
        i++;
     }
  }
  printf("Max:%d \n",max);
}
