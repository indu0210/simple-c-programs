#include<stdio.h>
#include<stdlib.h>

#define MAX 32

enum boolean {FALSE, TRUE};
int stlen(char str[]);
enum boolean palin(char str[]);

int main()
{
  char   str[MAX];
  enum boolean result;

  printf("Enter the string:");
  scanf("%s", str);

  result = palin(str);

  if (result == TRUE)
  {
    printf("String is palindrome \n");
  }
  else 
  {
    printf("String is not a palindrome \n");
  }
  exit(0);
}

int stlen(char str[])
{
  int i = 0;
  
  while (str[i] != '\0')
  {
   i++;
  }
  return i;
}

enum boolean palin(char str[])
{
  int  sl, i, mid;
  sl = stlen(str) - 1;

  if (sl == 0)
  {
    printf("Single letter is given \n");
    exit(0);
  }

  if(sl % 2 == 0)
  {
    mid = (sl / 2) - 1;
  }
  else 
    mid = sl / 2;
  for (i = 0; i <= mid; i++)
  {
    if (str[i] != str[sl - i])
    return(FALSE);
  }
  return(TRUE);
}

