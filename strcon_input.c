#include<stdio.h>
#include<stdlib.h>

#define  MAX  32
#define  MAX1 64

void sconcat(char str1[], char str2[], char str3[]);

int main()
{
  char   str1[MAX], str2[MAX], str3[MAX1];


  printf("Enter the first string:");
  scanf("%s", str1);
 
  printf("Enter the second string:");
  scanf("%s", str2);

  sconcat(str1, str2, str3);

  printf("Concatenated string is: %s \n", str3);
  exit(0);
}

void sconcat(char str1[], char str2[], char str3[])
{
  int   k = 0, i = 0, j = 0;

  while (str1[i] != '\0')
  {
    str3[k] = str1[i];
    k++;
    i++;
  }
  while (str2[j] != '\0')
  {
    str3[k] = str2[j];
    k++;
    j++;
    str3[k] = '\0';
  }
  return;
}
