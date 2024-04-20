#include <stdio.h>

int main() {
    int rows, cols, i, j, choice;
    
    printf("Enter the number of rows and columns for the matrices: ");
    scanf("%d %d", &rows, &cols);

    int matrix1[rows][cols], matrix2[rows][cols], result[rows][cols];

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("Choose the operation:\n");
    printf("1. Addition\n2. Subtraction\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Result of addition:\n");
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                    result[i][j] = matrix1[i][j] + matrix2[i][j];
                    printf("%d\t", result[i][j]);
                }
                printf("\n");
            }
            break;
        
        case 2:
            printf("Result of subtraction:\n");
            for (i = 0; i < rows; i++) {
                for (j = 0; j < cols; j++) {
                    result[i][j] = matrix1[i][j] - matrix2[i][j];
                    printf("%d\t", result[i][j]);
                }
                printf("\n");
            }
            break;
        
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}