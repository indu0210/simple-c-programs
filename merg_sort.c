#include<stdio.h>
#include<stdlib.h>

#define  MAX   32

int  readData(int data[], char filename[MAX]);
void printData(int data[], int N);
int  mergsort(int data1[], int N1, int data2[], int N2, int data3[]);

int main()
{
   char filename1[MAX], filename2[MAX];
   int  data1[MAX], data2[MAX], data3[MAX];
   int N1, N2, N;

   printf("Enter the first file name:");
   scanf("%s", filename1);

   printf("Enter the second file name:");
   scanf("%s", filename2);

   N1 = readData(data1, filename1 );
   N2 = readData(data2, filename2 );

   N  = mergsort(data1, N1, data2, N2, data3);
   
   printData(data3, N);
   exit(0);

}

int readData( int data[], char filename[MAX])
{
   int N = 0;
   FILE *fp = NULL;

   fp = fopen(filename, "r");

   if (fp == NULL)
   {
     printf("Error opening the given file \n");
     exit(1);
   }

   while (fscanf(fp, "%d", &data[N]) != EOF)
   {
       N++;
   }
   fclose(fp);
   return N;

}

void printData(int data[], int N)
{
   int l;
   printf("mergerd array of elements: \n");
   
   for (l = 0; l < N; l ++)
   {
      printf("%d \n", data[l]);
   }

}

int mergsort(int data1[], int N1, int data2[], int N2, int data3[])
{
   int i, j, k;
   int N;

   N = N1 + N2;
   i = j = k = 0;

   while (k != N )
   {
      if (data1[i] < data2[j])
      {
         data3[k] = data1[i];
         i++;
      }
      else {
         data3[k] = data2[j];
         j++;
      }
      k++;
         if (i >= N1)
         {
           while (j < N2)
           {
             data3[k] = data2[j];
             j++;
             k++;
           }
         }
         if (j >= N2)
         {
           while (i < N1)
           {
             data3[k] = data1[i];
             i++;
             k++;
           }
         } 
   }
   return N;
}
