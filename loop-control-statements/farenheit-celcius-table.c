#include <stdio.h>

int main() {
    int fahrenheit;
    float celsius;

    printf("Fahrenheit\tCelsius\n");
    for (fahrenheit = 1; fahrenheit <= 300; fahrenheit++) {
        celsius = (5.0/9.0) * (fahrenheit - 32);
        printf("%d\t\t%.2f\n", fahrenheit, celsius);
    }

    return 0;
}