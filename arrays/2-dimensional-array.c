#include <stdio.h>
#include <math.h>

void storeTable(int arr[][10], int n, int m, int number);

int main()
{
    int tables[2][10];
    storeTable(tables, 0, 10, 2);
    storeTable(tables, 1, 10, 3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[0][i]);
    }

    printf("\n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t", tables[1][i]);
    }

    return 0;
}

void storeTable(int arr[][10], int n, int m, int number)
{
    for (int i = 0; i < m; i++)
    {                                 // loop from 0 to 10;
        arr[n][i] = number * (i + 1); // 2, 4, 6, 8...
        // arr[0][0] arr[0][1] arr[0][2]...
        // arr[1][0] arr[1][1] arr[1][2]...
    }
}