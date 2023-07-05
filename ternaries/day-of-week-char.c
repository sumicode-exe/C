// Programme in C to get a
// character as an input from the user
// and then print the according
// day of the week
// using Ternary Operators

#include <stdio.h>
#include <math.h>

int main()
{

    // Defiing Variables
    char day;

    // Getting input
    printf("this programme prints which number (from 1 to 7) corresponds to which day of the week \n");
    printf("Enter a number from a-(1) to g-(7):  ");
    scanf("%ch", &day);

    // Logic ----> Ternary Operators
    day == 'a' ? printf("monday \n") : day == 'b' ? printf("tuesday \n")
                                   : day == 'c'   ? printf("wednesday \n")
                                   : day == 'd'   ? printf("thursady \n")
                                   : day == 'e'   ? printf("friday \n")
                                   : day == 'f'   ? printf("saturday \n")
                                   : day == 'g'   ? printf("sunday \n")
                                                  : printf("Enter a number from 1 to 7 to get a day of the week.");
    return 0;
}