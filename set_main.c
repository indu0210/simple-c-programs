#include<stdio.h>
#include<stdlib.h>
#include "set_fun.h"

#define  MAX  32

enum boolean{FALSE, TRUE};

int readData(int set[], char filename[MAX]);
void printData(int set[], int N);

int main()
{
  int  index, N1 , N2 , N3;
  int  set1[MAX], set2[MAX], set3[MAX];
  char filename1[MAX], filename2[MAX];

  printf("Give index \n");
  printf("1: union of set \n");
  printf("2: intersection \n");
  printf("3: difference \n");
  printf("4: membership \n");
  printf("enter input:");
  scanf("%d", &index);

  if (index != 1 && index != 2 && index != 3 && index != 4)
  {
    printf("Give only the value present in the index \n");
    exit(1);
  }
  while (index != 4)
  {
    printf("File name1:");
    scanf("%s", filename1);
    
    printf("File name 2:");
    scanf("%s", filename2);
 
    switch (index)
    {
      case 1:
      {
//        enum boolean match;

        N1 = readData(set1, filename1);
        N2 = readData(set2, filename2);

        N3 = uni(set1, N1, set2, N2, set3);
        printData(set3, N3);
        break;
      }
      case 2:
      { 
        N1 = readData(set1, filename1);

        N2 = readData(set2, filename2);
      
        N3 = inter(set1, N1, set2, N2, set3);
        printData(set3, N3);
        break;
      }
      case 3:
      {
       N1 = readData(set1, filename1);

       N2 = readData(set2, filename2);

       N3 = diff(set1, N1, set2, N2, set3);
       printData(set3, N3);
       break;
      }
      default :
      {
        printf("Not a valid input \n");
        break;
      }
    }
    exit (0);
  }
  if (index == 4)
  {
    int num;
    enum boolean found;

    printf("File name:");
    scanf("%s", filename1);
    N1 = readData(set1, filename1);
    printf("Enter the number to be found:");
    scanf("%d", &num);

    found = mem(set1, N1, num);
    if (found == TRUE)
    {
      printf("Number is found \n");
    }
    else
    {
      printf("Number is not found \n");
    }
    exit(0);
  } 

}
int readData(int set[], char filename[MAX])
{
  int N = 0;
  FILE *fp = NULL;
  
  fp = fopen(filename, "r");

  while (fscanf(fp, "%d", &set[N]) != EOF)
  {
    N++;
  }
  fclose(fp);
  return N;
}

void printData(int set[], int N)
{
   int i;
   printf("set 3 elements are \n");

   for (i = 0; i < N; i++)
   {
      printf("%d \n", set[i]);
   }
}

