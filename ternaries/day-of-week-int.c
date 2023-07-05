//Programme in C to get a 
//number (integer) as an input from the user
//and then print the according
//day of the week
//using Ternary Operators

#include <stdio.h>
#include <math.h>

int main(){
    
    //Defining Variables
    char day;

    //Getting input from the user
    printf("this programme prints which number (from 1 to 7) corresponds to which day of the week \n");
    printf("Enter a number from 1 to 7: ");
    scanf("%d", &day);

    //Logic ----> Ternary Operators
    day == 1 ? printf("monday \n") :
    day == 2 ? printf("tuesday \n") : 
    day == 3 ? printf("wednesday \n") : 
    day == 4 ? printf ("thursady \n") : 
    day == 5 ? printf ("friday \n") : 
    day == 6 ? printf ("saturday \n") : 
    day == 7 ? printf("sunday \n") : 
    printf("Enter a number from 1 to 7 to get a day of the week.");
    return 0;
}