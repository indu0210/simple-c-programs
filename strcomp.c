#include<stdio.h>
#include<stdlib.h>

#define  MAX  32

enum boolean {TRUE, FALSE};
enum boolean strcomp(char str1[], char str2[]);
int slen(char[]);

int main(void)
{

  char   str1[MAX], str2[MAX];
  enum   boolean found;

  printf("Enter the first string:");
  scanf("%s", str1);

  printf("Enter the second string:");
  scanf("%s", str2);

  found = strcomp(str1, str2);
  
  if (found == TRUE)
  {
  printf("The strings are same \n");
  }
  else 
  printf("The strings are not same \n");
  exit(0);
}

enum boolean strcomp(char str1[], char str2[])
{
  int i = 0;
  
  while (str1[i] != '\0' && str2[i] != '\0')
  {
     if (str1[i] != str2[i])
     {
         return(FALSE);
     }
     else 
         i++;
  }
  if (str1[i] == '\0' && str2[i] == '\0')
  {
     return(TRUE);
  }
  else 
     return(FALSE);

}

int slen(char str1[])
{
  int  i = 0;
  
  while (str1[i] != '\0')
  {
     i++;
  }
  return i;
}
