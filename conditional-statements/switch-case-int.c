//Exmample of Switch case operator
//To find the day of the week from a 
//corresponding intereger as entered by the user

#include <stdio.h>
#include <math.h>

int main(){

    char day;

    printf("this programme prints which number (from 1 to 7) corresponds to which day of the week \n");
    printf("Enter a number from 1 to 7: ");
    scanf("%d", &day);
    
    switch (day) {
        case 1 : printf("monday \n");
        break;
        case 2 : printf("tuesday \n");
        break;
        case 3 : printf("wednesday \n");
        break;
        case 4 : printf("thursay \n");
        break;
        case 5 : printf("friday \n");
        break;
        case 6 : printf("saturday \n");
        break;
        case 7 : printf("sunday \n");
        break;
    }

    return 0;
}