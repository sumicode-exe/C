#include <stdio.h>

int main()
{
    int array[100]; // Assuming the  size of the array is 100
    int size, position, element;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter the position to insert the element: ");
    scanf("%d", &position);


    if (position <= 0 || position > size + 1)
    {
        printf("Invalid position!");
        return 0;
    }


    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Shifting elements to the right from the desired position
    for (int i = size - 1; i >= position - 1; i--)
    {
        array[i + 1] = array[i];
    }


    // Inserting the element at the desired position
    array[position - 1] = element;
    size++; // Increasing the size of the array


    printf("Array after insertion:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }

    return 0;
}