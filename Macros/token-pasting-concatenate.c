#include <stdio.h>
#define mergeNUM(a, b) a##b
// #define mergeCHAR(c, d) #c##d
#define get(a) #a

int main()
{
    printf("%d ", mergeNUM(12, 34));
    // printf("%s", mergeCHAR(why, i));
    printf("%s", get(Sumiii));
}