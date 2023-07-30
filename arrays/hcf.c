#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int arr[20];
    printf("Enter the number of elements whose HCF you need: ");
    int n;
    scanf("%d", &n);
    printf("%d", n);
    int hcf = 1;

    printf("Enter the numbers: ");

    for (int i = 0; i <= n - 1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int smallest = arr[0];
    // printf("greatest %d", greatest);

    for (int i = 0; i <= n - 1; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }

    printf("Smallest number is:  %d", smallest);

    for (int i = 1; i <= smallest; i++)
    {
        int cf = 1;
        for (int j = 0; j <= n - 1; j++)
        {
            if (arr[j] % i != 0)
            {
                cf = i;
                break;
                // return i;
                        }
        }
        if (cf == 1)
        {
            hcf = i;
        }
    }

    printf("HCF is %d", hcf);
    return 0;
}