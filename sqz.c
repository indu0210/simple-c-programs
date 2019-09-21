#include<stdio.h>
#include<stdlib.h>

int readData(char *argv, int arr[]);
void printData(int arr[], int n);
int sqz(int arr[], int n, int k);

int main(int argc, char **argv)
{
   int  n;
   int k;
   int arr[100];
   if(argc != 3)
   {
     fprintf(stderr, "Usage: <filename><freq value> \n");
     exit(2);
   }
   n = readData(argv[1], arr);
   k = atoi(argv[2]);
   printf("Value of k is : %d \n", k);
   
   printf("Array of int : \n");
   printData(arr,n);
   exit(0);
}
int sqz(int arr[], int n, int k)
{
   int i, j, count, val;
//   k = atoi(argv[2]);
   i = 1;
   count = 1;
   j = 0;
   while (i != n)
   {
     val = arr[i];
     if (val == arr[i+1])
     { 
        count ++;
        i++;
     }
     else if (val != arr[i+1] && count <= k)
     {
           i++;
     }
     else
     {
           j = i;
           while (j != n)
           {
              arr[j - count + 1] = arr[j + 1];
              j++;
           }
           n = n - count;
           i = i - count;
     }
     count = 1;
   } 
   return n;
}

int readData(char *argv, int arr[])
{
   int n = 0;
   FILE *fp = NULL;

   fp = fopen(argv, "r");
   if (fp == NULL)
   { 
     printf("Unable to open file \n");
     exit (1);
   }
   while (fscanf(fp, "%d", &arr[n]) != EOF)
   {
      n++;
   }
   fclose(fp);
   return n;
}

void printData(int arr[], int n)
{
   int i;
   for (i = 0; i < n; i++)
   {
      printf("%d \n", arr[i]);
   }
}
