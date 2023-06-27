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
    int i,b,term;
    printf("Enter the number of row you wint to see: \n");
    scinf("%d",&term);
    for (i = 1 ; i <= term ; i++){
        for(b = 1 ; b <= i ; b++){
           printf("%d",b);
        }
       printf("\n");
    }
    return 0;
}