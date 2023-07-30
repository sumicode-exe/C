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

    //Calculate the PRODUCT of all elemnts
    //To calculate LCM, the maximum limit to 
    //check to would be till the PRODUCT

    int product = 1;
    for (int i = 0; i < n; i++){
        product *= arr[i];
    }

    //Calculate the smallest number
    //The LCM, in any case, will be 
    //MORE than the 
    

}