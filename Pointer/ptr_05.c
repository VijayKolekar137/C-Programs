#include<stdio.h>

int main()
{
    int i = 5;
    int *ptr;
    int **ptr_ptr;

    ptr = &i;
    ptr_ptr = &ptr;

    printf("The value of variable i is %d",**ptr_ptr);

    return 0;
}
