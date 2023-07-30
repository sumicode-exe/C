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

    // Calculate the greatest number
    // The LCM, in any case, will be
    // MORE than the greatest number
    //(The table of the greatet number)
    int greatest = arr[0];
    for (int i = 0; i < n; i++)
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
    int lcm = greatest;
    int found = 0;
    while (!found)
    {
        int isDivisible = 1;
        for (int i = 0; i < n; i++)
        {
            if (lcm % arr[i] != 0)
            {
                isDivisible = 0;
                break;
            }
        }
        if (isDivisible)
        {
            found = 1;
        }
        else
        {
            lcm += greatest;
        }
    }

    printf("%d", lcm);
    return 0;
}