#include <stdio.h>

int sum(int a, int b);

int main()
{
    int x=45, y=5;

    printf("The value of x + y is %d",sum(x,y));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}
