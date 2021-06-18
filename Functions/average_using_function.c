#include<stdio.h>

float average(int a , int b, int c);

int main()
{
    int x,y,z;

    printf("Enter the value of x: ");
    scanf("%d",&x);

    printf("Enter the value of y: ");
    scanf("%d",&y);

    printf("Enter the value of z: ");
    scanf("%d",&z);

    printf("Average of three number is %.2f",average(x,y,z));

    return 0;
}

float average(int a , int b, int c)
{
    float result;
    result = (float)(a+b+c)/3;
    return result;
}
