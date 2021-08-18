#include<stdio.h>
#include<stdlib.h>
#define SIZE 100;
int main(){
    int N = 0, i = 0, sum = 0, miss = 0; 
    printf("Enter array size:");
    scanf("%d", &N);
    int array[N];
    printf("Enter array elements: \n");
    for (i = 0; i < N; i++){
        scanf("%d",&array[i]);
        sum = sum + array[i];
    }
    miss = ((N+1)*(N+2) /2) - sum;
    printf("%d\n", miss);
}