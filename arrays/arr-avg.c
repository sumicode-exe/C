#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter how many elements in the array: "); 
    // Prompt the user to enter the number of elements in the array

    scanf("%d", &n); 
    // Read the number of elements from the user

    int arr[n]; 
    // Declare an array of size n to store the elements

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); 
        // Read each element from the user and store it in the array
    }

    int result = 0; 
    // Variable to store the sum of the elements

    for (int i = 0; i < n; i++)
    {
        result += arr[i]; 
        // Add each element to the result variable
    }
    
    result /= n; 
    // Calculate the average by dividing the sum by the number of elements

    printf("%d", result); 
    // Print the average

    return 0;
}