#include <stdio.h>
#include <string.h>


struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};


void printAdd(struct address add);

int main()
{

    struct address adds[3];

    printf("enter information for person 1 : ");
    printf("Enter house no: \n");
    scanf("%d", &adds[0].houseNo);
    printf("Enter block no: \n");
    scanf("%d", &adds[0].block);
    printf("Enter city: \n");
    scanf("%s", adds[0].city);
    printf("Enter state: \n");
    scanf("%s", adds[0].state);

    printf("enter information for person 2 : ");
    printf("Enter house no: \n");
    scanf("%d", &adds[1].houseNo);
    printf("Enter block no: \n");
    scanf("%d", &adds[1].block);
    printf("Enter city: \n");
    scanf("%s", adds[1].city);
    printf("Enter state: \n");
    scanf("%s", adds[1].state);

    printf("enter information for person 3 : ");
    printf("Enter house no: \n");
    scanf("%d", &adds[2].houseNo);
    printf("Enter block no: \n");
    scanf("%d", &adds[2].block);
    printf("Enter city: \n");
    scanf("%s", adds[2].city);
    printf("Enter state: \n");
    scanf("%s", adds[2].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);

    
}


void printAdd(struct address add){
    printf("address: %d, %d, %s, %s,", add.houseNo, add.block, add.city, add.state);
}
