#include <stdio.h>
#include <string.h>

//void calcSum(struct vector v1, struct vector v2, struct vector sum);

// //uder defined
// typedef struct student{
//     int roll;
//     float cgpa;
//     char name[100];
// } stu;

// typedef struct conputerengineeringstudent{
//     int roll;
//     float cgpa;
//     char name[100];
// } coe;

struct address
{
    int houseNo;
    int block;
    char city[100];
    char state[100];
};

// struct vector {
//     int x;
//     int y;
// };

// struct complex{
//     int real;
//     int img;
// };

// typedef struct BankAccount {
//     int accountNo;
//     char name[100];
// } acc;

void printAdd(struct address adds);

int main()
{
    // acc acc1 = {123, "sanjana"};
    // acc acc2 = {124, "yuvi"};
    // acc acc3 = {125, "sanjay"};

    // printf("acc no = %d\n", acc1.accountNo);
    // printf("name = %s", acc1.name);
    // return 0;

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

    printf("enter information for person 1 : ");
    printf("Enter house no: \n");
    scanf("%d", &adds[1].houseNo);
    printf("Enter block no: \n");
    scanf("%d", &adds[1].block);
    printf("Enter city: \n");
    scanf("%s", adds[1].city);
    printf("Enter state: \n");
    scanf("%s", adds[1].state);

    printf("enter information for person 1 : ");
    printf("Enter house no: \n");
    scanf("%d", &adds[2].houseNo);
    printf("Enter block no: \n");
    scanf("%d", &adds[2].block);
    printf("Enter city: \n");
    scanf("%s", adds[2].city);
    printf("Enter state: \n");
    scanf("%s", adds[2].state);

    void printAdd(adds[0]);
    void printAdd(adds[1]);
    void printAdd(adds[2]);

    
}


void printAdd(struct address adds){
    printf("address: %d, %d, %s, %s,", adds.houseNo, adds.block, adds.city, adds.state);
}

// void calcSum(struct vector v1, struct vector v2, struct vector sum){
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("sum of x is : %d\n", sum.x);
//     printf("sum of y is : %d\n", sum.y);
// }