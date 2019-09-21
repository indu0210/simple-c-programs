#include<stdio.h>

#define  MAX  32

void strcopy(char des[], char src[]);

int main()
{
  char des[MAX], src[MAX];

  printf("Enter chars in string 1:");
  scanf("%s", src);

  strcopy(des, src);
  printf("dest string is %s \n", des);
  return(0);
}

void strcopy(char des[], char src[])
{
  int i = 0;

  while (src[i] != '\0')
  {
    des[i] = src[i];
    i++;
  }
  des[i] = '\0';
  return;
}
