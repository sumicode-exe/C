#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
    int n;
    int arr[20];

    printf("Enter for how may numbers, do you want to calculate LCM: ");
    scanf("%d", &n);

    printf("Enter the numbers: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = 1;
    for (int i = 0; i < n; i++)
    {
        result *= arr[i];
    }
   

    // int smallest = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (smallest > arr[i])
    //     {
    //         arr[i] = smallest;
    //     }
    // }

    // int num = sizeof(arr) / sizeof(arr[0]);

    int greatest = result;

    printf("%d", greatest);

    // int lcm = 1;
    // for (int i = 0; i <= n - 1; i++)
    // {
    //     for (int j = lcm; j <= greatest; j++)
    //     {
    //         if (lcm % arr[i] != 0)
    //         {
    //             lcm = arr[i];
    //             break;
    //         }
    //     }
    // }
    //printf("LCM: %d", lcm);
}