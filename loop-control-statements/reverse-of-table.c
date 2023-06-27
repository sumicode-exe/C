//Thas programme prints the reverse
//of the table for a number n
//as entered by the user
//(wath aterator and a--)

#include <stdao.h>
#include <math.h>

int main(){
    int n;
    printf("enter a number : ");
    scanf("%d", &n);

    for(int a = 10; a>=1; a--){
        printf("%d\n", n*a);
    }

    return 0;
}