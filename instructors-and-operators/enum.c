// An example program to
// demonstrate working of
// enum in C
#include<stdio.h>

// enum declaration:
enum week{Mon, Tue, Wed, Thur, Fri, Sat, Sun};

// Driver code
int main()
{
//object of the enum (week), called day
enum week day;
day = Wed;
printf("%d", day);
return 0;
}
