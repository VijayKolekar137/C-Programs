#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main()
{
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;

    ptr->code = 101;

    printf("Code is %d",e1.code);

    return 0;
}
