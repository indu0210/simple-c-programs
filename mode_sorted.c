#include<stdio.h>
#include<stdlib.h>

int  main(void)
{
  int curNum, curFreq, modeFreq, nextNum, mode;

  printf("Enter the number:");
  scanf("%d", &curNum);

  if (curNum == -1)
  {  
    printf("Invalid input \n" );
    exit (2);
  }
  curFreq = 1;
  modeFreq = 1;
  mode = curNum;
  
  printf("Enter the next num of the data: ");
  scanf("%d", &nextNum);

  while (nextNum != -1)
  {
    if (curNum == nextNum)
    {
     curFreq = curFreq + 1;
    }
    else
       curFreq = 1;

    if (curFreq >= modeFreq)
    {
    mode = curNum;
    modeFreq = curFreq;
    }
    curNum = nextNum;
    printf("Enter the next num of the data: ");
    scanf("%d", &nextNum);
  }
  printf("Mode: %d Freq: %d \n", mode, modeFreq );
}
