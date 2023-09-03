#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{
    int row, column;

    printf("Enter the dimensions of the matrix <row> <column>");
    scanf("%d %d", &row, &column);
    int arr[30][30];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
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

    int temp[column][row];
    for (int rowc = 0; rowc < row; rowc++)
    {
        for (int columnr = 0; columnr < column; columnr++)
        {
            temp[columnr][rowc] = arr[rowc][columnr];
        }
    }
    printf("Transposed Matrix:\n");
    for (int i = 0; i < column; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("%d\t", temp[i][j]);
        }
        printf("\n");
    }
}


