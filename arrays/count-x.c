#include <stdio.h>

int count(int arr[], int size);

int main()
{
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    
    printf("Enter the number to search for: ");
    scanf("%d", &x);

    printf("The number %d occurs %d times in the array.\n", x, count);
    return 0;
}

int count(int arr[], int size)
{

    int x;
    int count = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }
    return count;
}
