#include <stdio.h>
#include <stdlib.h>

int linear_search(int *arr, int size, int key);

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size], i;
    printf("Enter the elements of array separated by space: ");
    for(i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter a number to search: ");
    scanf("%d", &key);

    int found_index = linear_search(arr, size, key);
    if(found_index == -1){
        printf("%d is not in the given array\n", key);
    }else{
        printf("%d is found at %d\n", key, found_index);
    }

    exit(0);
}

int linear_search(int *arr, int size, int key)
{
    int i;
    for(i = 0; i < size; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}