#include<stdio.h>

int printAddr(int a);

int main()
{
    int i = 5;
    printf("The value of variable i is %d\n",i);
    printf("The address of variable i is %u\n",&i);
    printAddr(i);
    return 0;
}

int printAddr(int a)
{
    printf("The value of variable a is %d\n",a);
    printf("The address of variable a is %u\n",&a);
}
