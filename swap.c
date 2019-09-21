#include<stdio.h>
#include<stdlib.h>

void swap(int a, int b);

int main(void)
{
   int x = 5, y = 10;
   swap(x, y);
   printf("x = %d, y = %d \n", x, y);
   exit (0);
}

void swap(int a, int b)
{
   int temp;
   temp = a;
   a = b;
   b = temp;
   printf("a = %6d, b = %d \n", a, b);
}
