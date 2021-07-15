#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char *name[20];
};

int main()
{
    struct employee e1,e2,e3;

    printf("Enter the code of first employee: ");
    scanf("%d",&e1.code);
    printf("Enter the salary of first employee: ");
    scanf("%f",&e1.salary);
    printf("Enter the name of first employee: ");
    scanf("%s",&e1.name);

    printf("\nEnter the code of second employee: ");
    scanf("%d",&e2.code);
    printf("Enter the salary of second employee: ");
    scanf("%f",&e2.salary);
    printf("Enter the name of second employee: ");
    scanf("%s",&e2.name);

    printf("\nEnter the code of third employee: ");
    scanf("%d",&e3.code);
    printf("Enter the salary of third employee: ");
    scanf("%f",&e3.salary);
    printf("Enter the name of third employee: ");
    scanf("%s",&e3.name);

    printf("\nCode of 1st employee %d\n",e1.code);
    printf("Salary of 1st employee %1.f\n",e1.salary);
    printf("Name of 1st employee %s\n",e1.name);

    printf("\nCode of 2nd employee %d\n",e2.code);
    printf("Salary of 2nd employee %1.f\n",e2.salary);
    printf("Name of 2nd employee %s\n",e2.name);

    printf("\nCode of 3rd employee %d\n",e3.code);
    printf("Salary of 3rd employee %1.f\n",e3.salary);
    printf("Name of 3rd employee %s\n",e3.name);

    return 0;
}
