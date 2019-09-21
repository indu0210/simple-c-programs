#include<stdio.h>
#include<stdlib.h>
#include<values.h>

#define    MAX    1000

enum boolean {TRUE, FALSE};

int readData(int  Table[MAX])
{
  int i, Nums;

  printf("Enter values not greater than %d \n", MAXINT);
  scanf("%d", &Nums);
  
  if (Nums == -1)
  {
  printf("Invalid input \n");
  exit (0);
  }

  for (i = 0; i < MAX; i++)
  {
     Table [i] = Nums;
     scanf("%d", &Nums);

     if (Nums == -1)
     {
     return i;
     }
  }
  return i;
}


enum boolean find(int Table[MAX],int N, int Value)
{
  for (int i = 0; i < N; i++)
  {
    if (Table[i] == Value)
    {
      return TRUE;
    }
  }
  return FALSE;
}


int main()
{
  int    N, Table[MAX];
  float  Value;
  N = readData(Table);
  enum   boolean found; 

  printf("Enter a value to search:");
  scanf("%f", &Value);
  printf("val = %5.2f", Value);
  found = find(Table, N, Value);

  if (found == TRUE)
  {
  printf("Value is found ");
  }
  else
  {
  printf("Value is not found");
  }
 printf("\n");
}
