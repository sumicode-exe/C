#include <stdio.h>
 // Function to calculate the GCD (Greatest Common Divisor)
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}
 // Function to calculate the LCM
int lcm(int arr[], int n) {
    int result = arr[0];
    for (int i = 1; i < n; i++) {
        result = (result * arr[i]) / gcd(result, arr[i]);
    }
    return result;
}
 int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
     int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
     int result = lcm(arr, n);
    printf("LCM: %d\n", result);
     return 0;
}