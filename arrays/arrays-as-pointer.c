#include <stdio.h>

int main()
{
    int aadhaar[5]; // Declare an integer array named 'aadhaar' with size 5

    // Input
    int *ptr = &aadhaar[0]; // Declare a pointer 'ptr' and assign the address of the first element of the array

    for (int i = 0; i < 5; i++)
    {
        printf("%d index: ", i); // Prompt the user to enter a value for the current index
        scanf("%d", (ptr + i)); // Read the value entered by the user and store it at the current index
    }

    // Output
    for (int i = 0; i < 5; i++)
    {
        printf("%d index = %d \n", i, *(ptr + i)); // Print the index and value of each element in the array
    }

    return 0;
}