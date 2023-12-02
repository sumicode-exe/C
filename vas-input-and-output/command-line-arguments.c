// C Program to illustrate the main function with command line arguments
#include <stdio.h>

int main(int argc, char *argv)
{

    // printing the count of arguments
    printf("The value of argc is %d\n", argc);

    // prining each argument
    for (int i = 0; i < argc; i++)
    {
        printf("%s \n", argv[i]);
    }

    return 0;
}
