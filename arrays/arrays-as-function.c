// ARRAYS AS FUNCTION ARGUMENTS AND SYNTAX

#include <stdio.h>
#include <math.h>

// Function to print the elements of an array
void printNumbers(int *arr, int n);
// or
void printNumbersarr(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6}; // Declare and initialize an array

    printNumbers(arr, 6); // Call the function to print the elements of the array
    printNumbersarr(arr, 6); // Call the function again with the same array

    return 0;
}

// Function to print the elements of an array
void printNumbers(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d : %d \n", i, arr[i]); // Print the index and value of each element
    }
}

// Function to print the elements of an array (alternative implementation)
void printNumbersarr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d : %d \n", i, arr[i]); // Print the index and value of each element
    }
}