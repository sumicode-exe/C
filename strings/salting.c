#include <stdio.h>
#include <string.h>

void salting(char password[]);

int main(){
    
}

void salting(char password[]){
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password);
    strcat(newPass, salt);
    puts(newPass);
}