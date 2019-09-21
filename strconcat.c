#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define  MAX   32

//void strcat(char str2[], char str1[]);
void strconcat(int len, char str2[], char str1[]);
int  strlength(char str1[]);
int main()
{
  char   str1[MAX], str2[MAX];
  int    len;

  printf("Enter the first string:");
  scanf("%s", str1);

  printf("Enter the second string:");
  scanf("%s", str2);
  
  len = strlength(str1);

  strconcat(len, str2, str1);
  printf("Concatenated string:%s \n", str1);
//  exit(0);
  strcat(str1, str2);
  printf("Concat : %s \n", str1);
  printf("Concat 1 : %s \n ", str2);
  exit(0);
}

int strlength(char str1[])
{
  int   i = 0;
  
  while (str1[i] != '\0')
  {
    i++;
  }
  return i;
}

void  strconcat(int len, char str2[], char str1[])
{
  int i = 0, j = 0;
  i = len;

  while (str2[j] != '\0')
  {
     str1[i] = str2[j];
     i++;
     j++;
     str1[i] = '\0';
  }
  return;
}

/*void strcat(char str1[], char str2[])
{
  int i, j;
  i = j = 0;
  while (str1[i] != '\0')
     i++;
  while ((str1[i++] = str2[j++]) != '\0')
      ;
}
*/
