//This programme prints different outputs in
//different patterns using nested loops

#include <stdio.h>
#include <math.h>

int main(){

    //PROG. FOR NUMBER PYRAMID
    int i, j, upto;
    printf("Enter the number of rows you want to see \n");
    scanf("%d", &upto);

    for (i = 1; i <= 1; i++){
        for(j = 1; j<= 1; j++){
            printf("%d", i);
        }
        printf("\n");
    }

    //PROG. FOR NUMBER LINE PYRAMID
    int a, b, numline;
    printf("Enter the number or lines you want to see \n");
    scanf("%d", numline);
    
    for(i = 1; i <= numline; i++){
        for(j = 1; j <=i; j++){
            printf("%d", j);
        }
        printf("\n");
    }
}