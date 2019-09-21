#include<stdio.h>
#include<stdlib.h>

int gcd_rec(int num1, int num2);
//int num1 = 0, num2 = 0, gcd;

int main(void)
{
    int num1 = 0, num2 = 0, gcd;
    printf("Enter the two numbers: \n");
    scanf("%d %d", &num1, &num2);

    if (num1 < 0 || num2 < 0)
    {
       printf("Invalid input given \n");
       exit (1);
    }
    gcd = gcd_rec(num1, num2);

    printf("gcd is %d \n", gcd);

    exit(0);
}
int gcd_rec(int num1, int num2)
{
    int rem;
    
    if (num2 == 0)
    {
        return num1;
    }
    else
    {
        rem = num1 % num2;
        return gcd_rec(num2, rem);
    }
}
