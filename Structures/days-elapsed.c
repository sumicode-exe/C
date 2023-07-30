#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct date1
{
    int date;
    char month[20];
    int year;
} d1;

typedef struct date2
{
    int date;
    char month[20];
    int year;
} d2;

int f(d1.month, d1.year);
int f(d2.month, d2.year);
int g(d1.month);
int g(d2.month);

int main()
{
    printf("Enter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &d1.month, &d1.day,
          &d1.year);

    printf("Enter today's date (mm dd yyyy): ");
    scanf("%i%i%i", &d2.month, &d2.day,
          &d2.year);

    printf("Tomorrow's date is %i/%i/%.2i.\n", d1.month,
           d1.day, d1.year % 100);
    printf("Tomorrow's date is %i/%i/%.2i.\n", d2.month,
           d2.day, d2.year % 100);

    int n1 = 1461 * f(d1.month, d1.year) / 4 + 153 + g(d1.month) / 5 + d1.date;
    int n2 = 1461 * f(d2.month, d2.year) / 4 + 153 + g(d2.month) / 5 + d2.date;
    int elapsed_time = n1 - n2;
    printf("time elapsed is: %d", elapsed_time);
}

int f(d1.month, d1.year)
{
    if (d1.month <= 2)
    {
        d1.year -= 1;
    }
}

int f(d2.month, d2.year)
{
    if (d2.month <= 2)
    {
        d2.year -= 1;
    }
}

int g(d1.month)
{
    if (d1.month <= 2)
    {
        d1.month += 13;
    }
    else
    {
        d1.month += 1;
    }
}

int g(d2.month)
{
    if (d2.month <= 2)
    {
        d2.month += 13;
    }
    else
    {
        d2.month += 1;
    }
}
