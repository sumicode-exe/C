#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int row, column;

    printf("Enter the dimensions of the matrix <row> <column>");
    scanf("%d %d", &row, &column);
    int arr[row][column];

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            printf("Enter the elements of Matrix A: [%d][%d] \n", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            printf("%d\t", arr[i][j]);
        }
        printf("\n");
    }
}
