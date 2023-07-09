//In order to access the memory address of a variable,
//prepend it with  sign. For example, &val returns the
//memory address of .

//This memory address is assigned to a pointer and can
//be shared among various functions. For example,  
//will assign the memory address of  to pointer . 
//To access the content of the memory to which the 
//pointer points, prepend it with a *. For example,
//*p will return the value reflected by  and any 
//modification to it will be reflected at the source ().

#include <stdio.h>

void updates(int *a, int *b){
    *a += *b;
    *b -= 2 * *b;
    if (*b<0) *b = -*b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}