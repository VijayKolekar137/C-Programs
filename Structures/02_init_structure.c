#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee rakesh = {101,7845,"Rakesh"};

    printf("The code of employee: %d\n",rakesh.code);
    printf("The salary of employee: %.2f\n",rakesh.salary);
    printf("The name of employee: %s\n",rakesh.name);

    return 0;
}
