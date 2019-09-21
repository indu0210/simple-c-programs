#include<stdio.h>
#include<stdlib.h>
#define MAX 32

int readData(FILE *, int []);
void printData(int [], int);

int main(int argc, char **argv)
{
 if (argc != 2)
 {
  fprintf(stderr, "Usage: rev order <filename> \n");
  exit(3);
 }
 int n, i, t = 0;
 int arr[MAX];
 FILE *fp = NULL;
 fp = fopen(argv[1], "r");
 if (fp == NULL)
 {
  printf("Error opening file \n");
  exit(3);
 }
 n = readData(fp, arr);
 for (i = 0; i < (n / 2); i++)
 {
  t = arr[i];
  arr[i] = arr[n - i - 1];
  arr[n - i - 1] = t;
 }
 printData(arr, n);
 exit(0);
}
int readData(FILE *fp, int arr[])
{
 int n = 0;
 while (fscanf(fp, "%d", &arr[n]) != EOF)
 {
  n++;
 }
 fclose(fp);
 return n;
}

void printData(int arr[], int N)
{
 int l;
 printf("Reverse order of elements \n");
 for (l = 0; l <N; l++)
 {
  printf("%d \n", arr[l]);
 }
}

