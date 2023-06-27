//This programme prints different outputs in
//different patterns using nested loops

#include <stdio.h>
#include <math.h>

int main(){

    //PROG. FOR NUMBER PYRAMID
    int i, j, upto;
    printf("Enter the number of rows you wint to see \n");
    scanf("%d", &upto);

    for (i = 1; i <= upto; i++){
        for(j = 1; j<= i; j++){
            printf("%d", i);
        }
        printf("\n");
    }

    //PROG. FOR NUMBER LINE PYRAMID
    int a,b,term;
    printf("Enter the number of row you want to see: \n");
    scanf("%d",&term);
    for (a = 1 ; a <= term ; a++){
        for(b = 1 ; b <= a ; b++){
           printf("%d",b);
        }
       printf("\n");
    }
    return 0;
}