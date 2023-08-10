// Programme to sort an array of integers in ascending order

#include <stdio.h>

// Function to sort the array using selection sort algorithm
void sort(int a[], int n)
{
    int i, j, temp;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main(void)
{
    int i;
    int array[16]; // Declare an array of size 16 to store integers

    // Read integers from the user and store them in the array
    for (int i = 0; i <= 15; i++)
    {
        scanf("%d", &array[i]);
    }

    // Call the sort function to sort the array
    sort(array, 16);

    printf("The array before the sort: \n");

    // Print the elements of the array before sorting
    for (i = 0; i < 16; i++)
    {
        printf("%i ", array[i]);
    }

    printf("\n \n The array after the sort: \n");

    // Print the elements of the array after sorting
    for (i = 0; i < 16; i++)
    {
        printf("%i ", array[i]);
    }

    printf("\n");
    return 0;
}