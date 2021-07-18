#include<stdio.h>

typedef struct employee
{
    int code;
    float salary;
    char *name;
}empinfo;

void show(empinfo emp)
{
    printf("Employee code: %d\n",emp.code);
    printf("Employee salary: %.2f\n",emp.salary);
    printf("Employee name: %s\n",emp.name);
}

int main()
{
    empinfo e1;
    empinfo *ptr;

    ptr =&e1;

    ptr->code=101;
    ptr->salary=1500.50;
    (*ptr).name="Rakesh";

    show(e1);
    return 0;
}
