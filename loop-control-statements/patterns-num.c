//This programme prints different outputs in
//different patterns using nested loops

#include <stdio.h>
#include <math.h>

int main(){

    int n, j, i, num = 1, space;
      
    printf("Enter the number of rows in pyramid of stars you want to see ");
 
    scanf("%d",&n);
 
    space = n - 1;
 
    for ( i = 1 ; i <= n ; i++ )
      {
        num = i;
 
        for ( j = 1 ; j <= space ; j++ )
            printf(" ");
        space--;
 
        for ( j = 1 ; j <= i ; j++ )
          {
            printf("%d", num);
            num++;
          }
        num--;
        num--;
        for ( j = 1 ; j < i ; j++)
          {
            printf("%d", num);
            num--;
          }
        printf("\n");
 
    }
      

    //PROG. FOR NUMBER LINE TRIANGLE
    int a,b,term;
    printf("Enter the number of rows you want to see: \n");
    scanf("%d",&term);

    for (a = 1 ; a <= term ; a++){
        for(b = 1 ; b <= a ; b++){
           printf("%d",b);
        }
       printf("\n");
    }

    for (a = term; a >= 1; a--){
        for (b = 1; b <= a; b++){
            printf("%d", b);
        }
        printf("\n");
    }

    /*
    
    //PROG. FOR NUMBER TRIANGLE
    int x, y, upto;
    printf("Enter the number of rows you want to see \n");
    scanf("%d", &upto);

    for (x = 1; x <= upto; x++){
        for(x = 1; y <= x; y++){
            printf("%d", x);
        }
        //printf("\n");
    }

    for (x = upto; x >= 1; x--){
        for(y = 1; y <= x; y++){
            printf("%d", y);
        }
        //printf("\n");
    }


    */

    return 0;
}