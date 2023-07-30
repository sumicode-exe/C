#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter how many elemnts in array");
    scanf("%d", &n);
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result;
    for (int i = 0; i < n; i++)
    {
        result = (arr[i] + result) / n;
    }
    printf("%d", result);
}