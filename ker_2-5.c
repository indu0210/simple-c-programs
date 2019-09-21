#include<stdio.h>
#include<stdlib.h>

#define MAX 32

int slen(char s[MAX]);
int loc(char s1[], char s2[]);

int main()
{ 
//   char  s1[MAX], *cptr1 = NULL;
//   char  s2[MAX], *cptr2 = NULL;

   char s1[MAX], s2[MAX];
   int pos;

   printf("Enter string 1: ");
   scanf("%s", s1);

   printf("Enter string 2: ");
   scanf("%s", s2);

   pos = loc(s1, s2);
   if(pos == -1)
   {  
      printf("There are no characters of str1 in str2.\n");
   }
   else
   {
      printf("The position of 1st charcter in string 1 is %d\n", pos);
   }
   exit(0);
//   printf("Loc is %d \n", pos);
//   exit(0);
}

int slen(char s[MAX])
{
  int len = 0;
  char *cptr = NULL;

  cptr = &s[0];
  
  while (*cptr != '\0')
  {
   len++;
   cptr++;
  }
  return len;
}
int loc(char s1[], char s2[])
{
   int   i = 0, pos = -1;
//   char  *cptr1 = NULL;
   char  *cptr2 = NULL;
//   cptr1 = &s1[0];
//   cptr2 = &s2[0];
 
//   len1 = slen(s1);
//   len2 = slen(s2);

   while(*s1 != '\0')
   {
      cptr2 = s2;
      while(*cptr2 != '\0')
      {
        if(*s1 == *cptr2)
        {
           pos = i;
           break;
        }
        else cptr2++;
      }
      if(pos == -1)
      {
         s1++;
         i++;
      }
      else 
         return pos;
   }
   return -1;
}
