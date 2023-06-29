#include <stdio.h>

void printArrayReverse(int arr[], int size);

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("Array in reverse order: ");
    printArrayReverse(arr, size);
    return 0;
}

void printArrayReverse(int arr[], int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}