//pass = "test"
//salt = "abc"
//test "testabc123"

#include <stdio.h>
#include <string.h>

void salting(char password[]);

int main(){
    char password[100];
    printf("Enter a password: \n");
    scanf("%s", &password);
    salting(password);    
}

void salting(char password[]){
    char salt[] = "123";
    char newPass[200];

    strcpy(newPass, password); //newPass = "test";
    strcat(newPass, salt); // newPass = "test" + "123";
    puts(newPass);
}
