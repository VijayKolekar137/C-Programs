#include<stdio.h>

struct emp
{
    char *name[20];
    float salary;
};

int main()
{
    FILE *ptr;

    ptr = fopen("Emp_Details.txt","w");

    struct emp e1,e2;

    printf("Enter the name for first employee: ");
    scanf("%s",&e1.name);

    printf("Enter the salary for first employee: ");
    scanf("%f",&e1.salary);

    printf("Enter the name for second employee: ");
    scanf("%s",&e2.name);

    printf("Enter the salary for second employee: ");
    scanf("%f",&e2.salary);

    fprintf(ptr,"%s,%.2f\n%s,%.2f\n",e1.name,e1.salary,e2.name,e2.salary);



    return 0;
}
