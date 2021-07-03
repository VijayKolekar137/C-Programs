#include<stdio.h>

int main()
{
    int i = 4;
    int *ptr;
    ptr = &i;

    printf("The address of variable i is %u\n",ptr);
    printf("The value of variable i is %d\n",*ptr);

    return 0;
}
