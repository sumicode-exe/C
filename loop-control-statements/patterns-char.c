#include <stdio.h>
#include <math.h>


int main() {
    int n,i,j,k,samp=1;
  
    printf("Enter the number of rows in pyramid of stars you want to see ");
    scanf("%d",&n);
     
    for (i=1; i<=n; i++){
        for (k=samp; k<=n; k++){
            printf(" ");
        }
        for (j=0; j< i; j++){
            printf("*");
        }
        samp = samp + 1;
        printf("\n");
    }

    samp = 1;
    for (i=n-1; i>=1; i--){
        for (k=samp; k>=0; k--){
            printf(" ");
        }
        for (j=i; j>=1; j--){
            printf("*");
        }
        samp = samp + 1;
        printf("\n");
    }
 return 0;
}