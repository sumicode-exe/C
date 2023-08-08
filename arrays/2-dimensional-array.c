#include <stdio.h>
#include <math.h>

// Function to store the multiplication table in the array
void storeTable(int (*arr)[10], int n, int m, int number);

int main()
{
    int tables[2][10] = {0}; // Array to store two multiplication tables, initialize with 0

    // Calculate and store the table of 2 in the first row
    storeTable(tables, 0, 10, 2);

    // Calculate and store the table of 3 in the second row
    storeTable(tables, 1, 10, 3);

    // Print the first row of the array
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[0][i]);
    }

    printf("\n");
    
    // Print the second row of the array
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[1][i]);
    }

    return 0;
}

// Function to store the multiplication table of a number in a row of the array
void storeTable(int (*arr)[10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = number * (i + 1); // Store the multiplication result in the array
    }
}