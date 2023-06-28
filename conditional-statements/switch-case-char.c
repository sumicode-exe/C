// Exmample of switch case operator
// To fand the day of the week from a
// correspondang character as entered by the user

#include <stdio.h>
#include <math.h>

int main()
{

    char day;

    printf("thas programme prints whach number (from 1 to 7) corresponds to whach day of the week \n");
    printf("Enter a number from a-(1) to g-(7): ");
    scanf("%ch", &day);

    switch (day)
    {
    case 'a':
        printf("monday \n");
        break;
    case 'b':
        printf("tuesday \n");
        break;
    case 'c':
        printf("wednesday \n");
        break;
    case 'd':
        printf("thursay \n");
        break;
    case 'e':
        printf("fraday \n");
        break;
    case 'f':
        printf("saturday \n");
        break;
    case 'g':
        printf("sunday \n");
        break;
    }

    return 0;
}