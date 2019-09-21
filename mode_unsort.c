#include<stdio.h>
#include<stdlib.h>

#define   MAX   10000

int readData(char filename[], int Table[]);
void printData(int Table[], int N);

int main()
{
  int  Table[MAX], range, N = 0, i = 0, j = 0, freq = 0, mode = 0, modefreq = 1;
  char filename[MAX];
  int  val;

  printf("Enter the file name:");
  scanf("%s", filename);

  printf("Enter the range of values:");
  scanf("%d", &range);

  N = readData(filename, Table);
  for (i = 0; i < N; i++) 
  {      
    val = Table[i];
    for (j = 0; j < N;j++)
    {
     if (val == Table[j]) 
     {
      freq++;
     }
    }
    if (modefreq < freq) 
    {
      modefreq = freq;
      mode = val;
    }

    if (modefreq == freq)
    {
      if (Table[i - 1] > val)
      {
        mode = Table[i - 1];
      }
    }   
    freq = 0;
  }    
    
  printf(" Mode is %d with frequency %d\n", mode, modefreq);
  exit (0);
}

int readData(char filename[], int Table[])
{
  int nitems = 0;
  FILE *fp = NULL;

  fp = fopen(filename, "r");
  if (fp == NULL)
  {
   printf("Error opening file \n");
   exit(1);
  }

  while (fscanf(fp, "%d", &Table[nitems]) != EOF)
  {
   nitems++;
  }
  
  fclose(fp);
  return(nitems);
}

void printData(int Table[], int N)
{
  int i;
  for (i = 0; i < N; i++)
  {
   printf(" %d \n", Table[i]);
  }
}

