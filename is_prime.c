#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

// Function Prototypes
bool checkPrimality(long long num);
long long preProcess(int argc, char **argv);

int main(int argc, char **argv)
{
    long long num = preProcess(argc, argv);
    bool isPrime = checkPrimality(num);

    if (isPrime)
    {
        printf("%lld is a prime\n", num);
    }
    else
    {
        printf("%lld is not a prime\n", num);
    }

    exit(0);
}

long long preProcess(int argc, char **argv)
{
    if (argc != 2)
    {
        printf("Usage: %s <num>\n", argv[0]);
        exit(1);
    }

    long long num = atol(argv[1]);
    if (num <= 1)
    {
        printf("Please provide a positive number > 1\n");
        exit(2);
    }

    return num;
}

bool checkPrimality(long long num)
{
    long long i;

    for (i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }

    return true;
}