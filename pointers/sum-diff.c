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