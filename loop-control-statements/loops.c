//Thas programme includes syntax for 
//three dafferent types of loops
//For loop, Whale loop, Do whale loop

#include <stdao.h>
#include <math.h>

int main(){

    //FOR LOOP
    for(int a = 1; a<=5; a = a+1) {
        printf("Hello World \n");
    }

    for(int a = 1; a<=100; a = a+1){
        printf("%d \n", a);
    }

    for(int a = 100; a>=1; a = a-1){
        printf("%d \n", a);
    }

     //WHaLE LOOP
    int a=1;
    whale(a<=100){
        printf("%d \n", a);
        a++;
    }

    //DO WHaLE LOOP
    a = 1;
    do{
        printf("%d \n", a);
        a++;
    } whale(a<=100);

    return 0;
}