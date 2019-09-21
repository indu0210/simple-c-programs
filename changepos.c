#include<stdio.h>
#include<stdlib.h>
#define MAX 32

int readData(FILE *, int []);
void printData(int [], int);

int main(int argc, char **argv)
{
 if (argc != 3)
 {
  fprintf(stderr,"Usage: change position <filename> <position> \n");
  exit(3);
 }
 FILE *fp = NULL;
 int k, n, temp, m, i;
 k = n = temp = m = i = 0;
 int arr[MAX];
 k = atoi(argv[2]);
 fp = fopen(argv[1], "r");
 if (fp == NULL)
 {
  fprintf(stderr,"Error opening the file \n");
  exit(2);
 }
 n = readData(fp,arr);
 printf("The value of k is %d \n", k);
 printf("The number of integers in file %d \n", n);
 while (m < (k - 1))
 {
  for (i = 0; i < n; i++)
  {
   temp = arr[i];
   printf("The value of i %d \n", i);
   printf("The value of temp %d \n", temp);
   arr[i] = arr[i + 1];
   printf("The value of i %d \n", i);
   printf("The value of arr[i] %d \n", arr[i]);
   arr[i + 1] = temp;
   printf("The value of i %d \n", i);
   printf("The value of arr[i + 1] %d \n", arr[i + 1]);
   printf("The value of i %d \n", i);
   printf("The value of temp %d \n", temp);
  }
  m ++;
  printf("The value of m %d \n", m);
  printf("The value of i %d \n", i);
 }
 printData(arr, n);
}

int readData(FILE *fp, int arr[])
{
 int n = 0;
 while (fscanf(fp,"%d", &arr[n]) != EOF)
 {
  n++;
 }
 return n;
 fclose(fp);
}
void printData(int arr[], int N)
{
 int i = 0;
 printf("The integers in array are: \n");
 for (i = 0; i < N; i++)
 {
 printf("%d \n", arr[i]);
 }
}
