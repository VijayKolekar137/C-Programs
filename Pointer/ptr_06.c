#include<stdio.h>

int change(int i);

int main()
{
    int a = 5;
    printf("The value of variable a is %d\n",a);
    change(a);

    return 0;
}

int change(int i)
{
    i = i * 10;
    printf("The value of variable i is %d\n",i);
}
