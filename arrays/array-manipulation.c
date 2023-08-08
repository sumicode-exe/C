#include <stdio.h>

int main()
{
    int array[100]; 
    // Assuming the size of the array is 100
    int size, position, element;

    printf("Enter the size of the array: "); 
    // Prompt the user to enter the size of the array
    scanf("%d", &size); 
    // Read the size of the array from the user

    printf("Enter the elements of the array:\n"); 
    // Prompt the user to enter the elements of the array
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]); 
        // Read each element from the user and store it in the array
    }

    printf("Enter the position to insert the element: "); 
    // Prompt the user to enter the position to insert the element
    scanf("%d", &position); 
    // Read the position from the user

    // Check if the position is valid
    if (position <= 0 || position > size + 1)
    {
        printf("Invalid position!"); 
        // Print an error message if the position is invalid
        return 0; 
        // Terminate the program
    }

    printf("Enter the element to insert: "); 
    // Prompt the user to enter the element to insert
    scanf("%d", &element); 
    // Read the element from the user


    // Shifting elements to the right from the desired position
    for (int i = size - 1; i >= position - 1; i--)
    {
        array[i + 1] = array[i]; 
        // Shift each element one position to the right
    }


    // Inserting the element at the desired position
    array[position - 1] = element; 
    // Insert the element at the desired position
    size++; 
    // Increase the size of the array

    printf("Array after insertion:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]); 
        // Print each element of the array
    }

    return 0;
}