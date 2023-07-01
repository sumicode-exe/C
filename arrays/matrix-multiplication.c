#include <stdio.h>
#include <math.h>

int main()
{
    int row1;
    int column1;

    int row2;
    int column2;

    int i, j, k;
    int matrix1[10][10];
    int matrix2[10][10];
    int result[10][10];

    printf("Enter the dimensions of the matrix 1: \n");
    scanf("%d \n %d", &row1, &column1);

    printf("Enter the dimensions of the matrix 2: \n");
    scanf("%d \n %d", &row2, &column2);

    if (column1 != row2)
    {
        printf("Invalid dimensions \n");
    }
    else
    {
        

        for (i = 0; i < row1; i++)
        {
            for (j = 0; j < column1; j++)
            {
                printf("Enter the elements of Matrix A: [%d][%d] \n", i, j);
                scanf("%d", &matrix1[i][j]);
            }
        }

        printf("Enter the elements of Matrix-B:\n");
        for (i = 0; i < row2; i++)
        {
            for (j = 0; j < column2; j++)
            {
                printf("Enter the elements of Matrix B: [%d][%d] \n", i, j);
                scanf("%d", &matrix2[i][j]);
            }
        }


        
        for (i = 0; i < row1; i++) {
            for (j = 0; j < column2; j++) {
                result[i][j] = 0;
                for (k = 0; k < row2; k++) {
                    result[i][j] += matrix1[i][k] * matrix2[k][j];
                }
            }
        }

        printf("The product of the two matrices is:-\n");

        for (i = 0; i < row1; i++) {
            for (j = 0; j < column2; j++) {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }


        // for (int i = 1; i <= row1; i++)
        // {
        //     for (int j = 1; j <= column2; j++)
        //     {
        //         result[i][j] = 0;

        //         for (int k = 1; k <= row2; k++)
        //         {
        //             // result[i][j] = &result[row1][column2];
        //             result[i][j] += matrix1[i][k] * matrix2[k][j];
        //         }
        //         printf("%d\t", result[i][j]);

        //         for (int k = 1; k <= row2; k++)
        //         {
        //             // result[i][j] = &result[row1][column2];
        //             result[i][j] += matrix1[k][j] * matrix2[i][k];
        //         }
        //         printf("%d\t", result[i][j]);
        //     }

        //     printf("\n");
        // }

        for (int i = 0; i < row1; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                printf("%d\t", result[i][j]);
            }
            printf("\n");
        }
    }

    return 0;
}

// int matrixMultiplication(int matrix1[][100], int matrix2[][100], int result[][100], int row2, int column2, int row1, int column1)
// {

//     for (int i = 0; i = row1; i++)
//     {
//         for (int j = 0; j = column2; j++)
//         {
//             result[i][j] = 0;
//             for (int k = 0; k < column1; k++)
//             {
//                 result[i][j] += matrix1[i][k] * matrix2[k][j];
//             }
//         }
//     }
//     return result;
// }