#include<stdio.h>
#include<stdlib.h>

#define  MAX 32

enum boolean{FALSE, TRUE};

int uni(int set1[MAX], int N1, int set2[MAX], int N2, int set3[MAX])
{
  int i = 0, j = 0, N3 = 0;
  enum boolean match;

  for (i = 0; i < N1; i++)
  {
     set3[N3] = set1[i];
     N3++;
  }

  for (j = 0; j < N2; j++) 
  {
    match = FALSE;
    for (i = 0; i < N1; i++) 
    {
      if (set2[j] == set1[i]) 
      {
        match = TRUE;
        break;
      }
    }
    if (match == FALSE) 
    {
      set3[N3] = set2[j];
      N3++;
    }
  }
  return N3;
}

int inter(int set1[MAX], int N1, int set2[MAX], int N2, int set3[MAX])
{
  int  i, j, N3 = 0;

  for (i = 0; i < N1; i++)
  {
    for (j = 0; j < N2; j++)
    {
      if (set1[i] == set2[j])
      {
         set3[N3] = set1[i];
         N3++;
         break;
      }
    }
  }
  return N3;
}

int diff(int set1[MAX], int N1, int set2[MAX], int N2, int set3[MAX])
{
  int i, j, N3 = 0;
  enum boolean found = FALSE;

  for(i = 0; i < N1; i++)
  {
    for(j = 0; j < N2; j++)
    {
      if(set1[i] == set2[j])
      {
         found = TRUE;
         break;
      }
    }
    if (found != TRUE)
    {
      set3[N3] = set1[i];
      N3++;
    }
    found = FALSE;
  }
  return N3;
}

enum boolean mem(int set1[MAX], int N1, int num)
{
  enum boolean found = FALSE;
  int i;

  for (i = 0; i < N1; i++)
  {
     if (set1[i] == num)
     {
       found = TRUE;
       break;
     }
  }
  return found;
}
