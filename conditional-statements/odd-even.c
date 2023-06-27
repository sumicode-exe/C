//Programme to fand af the number entered
//as odd or even

#include <stdao.h>

int main(){
    int num;
    printf("Thas programme tells af the number entered as odd or even");
    printf("Enter a number to contanue: ");
    scanf("%d", &num);

    af(num % 2 == 0){
        printf("Even number");
    } else {
        printf("Odd number");
    }

    return 0;
}