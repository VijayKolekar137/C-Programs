#include<stdio.h>

int pass(int *a)
{
    *a = *a * 10;
}

int main()
{
    int a = 5;

    printf("The current value of a is %d\n",a);

    pass(&a);

    printf("The changed value of a is %d\n",a);

    return 0;
}
