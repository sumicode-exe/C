#include <stdio.h>
#include <math.h>
#include <string.h>

int main()
{

    // Input the array of numbers you want to input
    int n;
    int arr[20];

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Calculate the PRODUCT of all elemnts
    // To calculate LCM, the maximum limit to
    // check to would be till the PRODUCT

    int product = 1;
    for (int i = 0; i < n; i++)
    {
        product *= arr[i];
        //return product;
    }
    printf("Max can be:%d", product);

    // Calculate the greatest number
    // The LCM, in any case, will be
    // MORE than the greatest number
    //(The table of the greatet number)
    int greatest = arr[0];
    for (int i = 0; i <= n; i++)
    {
        if (greatest < arr[i])
        {
            greatest = arr[i];
        }
        // return greatest;
    }

    // For each mutiple of the greatest number,
    // if other elements in the array divide it
    // to remainder 0, it is the LCM
    int lcm = 1;
    for (int i = greatest; i <= product + 1; i *= greatest)
    {
        // int isDivisible = 1; // Flag variable
        // for (int j = 0; j < n; j++)
        // {
        //     if (i % arr[j] != 0)
        //     {
        //         isDivisible = 0;
        //         break;
        //     }
        // }
        // if(isDivisible == 1){
        //     lcm = i;
        //     break;
        // }
        printf("table: %d \n", i);
    }
    


    //printf("%d", lcm);
    return 0;
    }