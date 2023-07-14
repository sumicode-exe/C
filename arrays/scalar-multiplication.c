#include <stdio.h>
#include <math.h>

int main()
{
    int row1;
    int column1;

    int scalar;

    int i, j, k;
    int matrix1[10][10];
    int result[10][10];

    printf("Enter the dimensions of the matrix 1: \n");
    scanf("%d \n %d", &row1, &column1);

    printf("Enter the number to multiply with: \n");
    scanf("%d \n", &scalar);

    // Getting the values of matrix
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column1; j++)
        {
            printf("Enter the elements of Matrix A: [%d][%d] \n", i, j);
            fflush(stdin);
            scanf("%d", &matrix1[i][j]);
        }
    }

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column1; j++)
        {
            result[i][j] = 0;

            result[i][j] += matrix1[i][j] * scalar;
        }
    }
    printf("The product of the two matrices is:-\n");

    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column1; j++)
        {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
