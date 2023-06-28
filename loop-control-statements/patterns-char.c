#include <stdio.h>
#include <math.h>

int main()
{

    int n, i, j, k, samp = 1;

    printf("Enter the number of rows in pyramid of stars you want to see ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (k = samp; k <= n; k++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf("*");
        }
        samp = samp + 1;
        printf("\n");
    }

    samp = 1;
    for (i = n - 1; i >= 1; i--)
    {
        for (k = samp; k >= 0; k--)
        {
            printf(" ");
        }
        for (j = i; j >= 1; j--)
        {
            printf("*");
        }
        samp = samp + 1;
        printf("\n");
    }

    /*
    //NEW WITH COKOUR AND DELAY
    int row, c, tmp, color = 1;
    while(!kbhit()){
        if(color == 7)
        color = 1;
        textcolor(color);
        tmp = 5;
        for(row = 1; row <= 5; row ++){
            for(c = 1; c < tmp; c++)
            cprintf(" ");
            tmp--;

            for(c=1; c < tmp; c++)
            printf("*");
            printf("\n");
        }

        delay(200);
        textcolor(color);
        tmp = 1;

        for(row = 5; row >= 1; row --){
            for (c = 1; c < tmp; c++)
            printf(" ");
            tmp++;

            for (c = 1; c <= 2*row -1; c++)
            printf("*");
            printf("\n");
        }
        delay(200);
        color++;
    }

*/

    return 0;
}