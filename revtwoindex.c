#include<stdio.h>
#include<stdlib.h>

int readData(FILE *, int []);
void printData(int [], int );

int main(int argc, char **argv)
{
 int n, arr[8];
 n = 0;
 if (argc != 2)
 {
  fprintf(stderr, "Usage: array rev <filename> \n");
  exit(3);
 }
 FILE *fp = NULL;
 fp = fopen(argv[1], "r");
 if (fp == NULL)
 {
  printf("Error opening file \n");
  exit(3);
 }
 n = readData(fp, arr);
 printf("The value of n is %d \n", n);
 printData(arr, n);
 exit(1);

}
int readData(FILE *fp, int arr[])
{
 int n = 0;
 while (fscanf(fp, "%d", &arr[n]) != EOF)
 {
  n++;
 }
 return n;
 fclose(fp);
}
/*
void printData(int arr[], int N)
{
 int i;
 printf("Elements in array are ");
 for (i = 0; i < N; i++)
 {
  printf("%d \n", arr[i]);
 }
 printf("\n");
}
*/
void printData(int arr[], int N)
{
 int i = N;
 printf("Elements in array are \n");
 for (i = i - 1; i >= 0; i--)
 {
  printf("%d \n", arr[i]);
 }
 printf("\n");
}
