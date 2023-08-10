//This is a programme in C to 
//reverse the elements of an array
//which are provided as an input b the user
#include <stdio.h>
#include <math.h>

// Function to reverse the elements of an array
void reverse(int arr[], int n);

// Function to print the elements of an array
void printArr(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 4, 5}; // Declare and initialize an array

    reverse(arr, 5); // Reverse the elements of the array
    printArr(arr, 5); // Print the reversed array

    return 0;
}

// Function to reverse the elements of an array
void reverse(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstVal = arr[i]; // Store the value of the element at index i
        int secondVal = arr[n - i - 1]; // Store the value of the element at the corresponding index from the end
        arr[i] = secondVal; // Assign the value of the element from the end to the current index
        arr[n - i - 1] = firstVal; // Assign the stored value to the corresponding index from the end
    }
}

// Function to print the elements of an array
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]); // Print each element of the array
    }
    printf("\n"); // Move to the next line after printing the array
}