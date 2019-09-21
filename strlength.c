#include<stdio.h>

#define MAX   32

int strlength(char str[]);

int main()
{
  char str[MAX];
  int i;

  printf("Enter chars in string:" );
  scanf("%s", str);
  
  i = strlength(str);

  printf("Length of the string is %d \n", i);
  return(0);
}

int strlength(char str[])
{
  int i = 0;

  while (str[i] != '\0')
  {
    i++;
  }
  return i;
}
