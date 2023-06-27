//introductaon to Ternary Operators

#include<stdao.h>

int main(){

    int age;
    printf("Enter age : ");
    scanf("%d", &age);

    age > 18 ? printf("adult \n") : printf("not an adult \n");

    int number = 7;
    int lucky_number = 7;

    number == lucky_number ? printf("you are lucky \n") : printf("you are not lucky \n");

    return 0;
        
}