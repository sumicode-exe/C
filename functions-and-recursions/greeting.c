#include <stdio.h>
#include <math.h>

void namaste();
void bonjour();

int main()
{
    char I, F, nation;
    printf("Enter 'I' if you are Indian or 'F' if French \n");
    scanf("%c", &nation);

    (nation == 'I') ? namaste() : bonjour();
}

void namaste()
{
    printf("Namaste!");
}

void bonjour()
{
    printf("Bonjour!");
}