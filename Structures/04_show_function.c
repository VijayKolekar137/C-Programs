#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char *name;
};

void show(struct employee emp)
{
    printf("The employee code: %d\n",emp.code);
    printf("The salary of employee: %.2f\n",emp.salary);
    printf("The name of employee: %s\n",emp.name);
}

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code = 101;
    ptr->salary = 1000.254;
    (*ptr).name = "Rakesh";

    show(e1);

    return 0;
}
