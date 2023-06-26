#include <stdio.h>
//For commit

int main(){

    int a, b, c, d, e, f, g, h, i;

    printf("This programme prints the smallest number of the 9 inputs \n");

    printf("Enter the first number: ");
    scanf("%d \n", &a);

    printf("Enter the second number: ");
    scanf("%d \n", &b);

    printf("Enter the third number: ");
    scanf("%d \n", &c);

    printf("Enter the fourth number: ");
    scanf("%d \n", &d);

    printf("Enter the fifth number: ");
    scanf("%d \n", &e);

    printf("Enter the sixth number: ");
    scanf("%d \n", &f);

    printf("Enter the seventh number: ");
    scanf("%d \n", &g);

    printf("Enter the eighth number: ");
    scanf("%d \n", &h);

    printf("Enter the ninth number: ");
    scanf("%d \n", &i);

    if (a<b && a<c && a<d && a<e && a<f && a<g && a<h && a<i){
        printf("The smallest digit is: %d \n", a);
    } else if (b<c && b<d && b<e && b<f && b<g && b<h && b<i){
        printf("The smallest digit is: %d \n", b);
    } else if (c<d && c<e && c<f && c<g && c<h && c<i){
        printf("The smallest digit is: %d \n", c);
    } else if (d<e && d<f && d<g && d<h && d<i){
        printf("The smallest digit is: %d \n", d);
    } else if (e<f && e<g && e<h && e<i){
        printf("The smallest digit is: %d \n", e);
    } else if(f<g && f<h && f<i){
        printf("The smallest digit is: %d \n", f);
    } else if(g<h && g<i){
        printf("The smallest digit is: %d \n", g);
    } else if(h<h){
        printf("The smallest digit is: %d \n", h);
    } else {
        printf("The smallest digit is: %d \n", i);
    }

    return 0;
}