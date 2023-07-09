//slice
//return from index n to m
//helloWorld - {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
//n = 3 and m = 6;
//output = loWo
//this is achieved by making a new string array

#include <stdio.h>
#include <string.h>
#include <math.h>

void slice(char str[], int n, int m);

int main()
{

    char str[50];
    int n, m;

    printf("Enter full name : ");
    fgets(str, 50, stdin);

    printf("enter from where you want to slice: \n");
    scanf("%d", &n);

    printf("enter till where you want to slice: \n");
    scanf("%d", &m);

    //puts(str);
    slice(str, n, m);
}

void slice(char str[], int n, int m)
{
    char newStr[100];
    int j = 0;
    for (int i = n; i <= m; j++, i++)
    {
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}