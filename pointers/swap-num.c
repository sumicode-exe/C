#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}



//#include <stdio.h>
//#include <math.h> swap-num.c


//void swap(int a, int b);
//void _swap(int *a, int *b);

//int main()
//{
//    int x = 3, y = 5;

    // call by value
//    _swap(&x, &y);
//    printf("x = %d & y = %d \n", x, y);
//    return 0;
//}


//call by value
//void swap(int a, int b)
//{
//    int t = a;
//    a = b;
//    b = a;
//}

//call by reference
//void _swap(int *a, int *b)
//{
//    int t = *a;
//    *a = *b;
//    *b = t;
//}
