#include<stdio.h>

int sumNumber(int n);

int main()
{
    int num=0;

    printf("Enter the number: ");
    scanf("%d",&num);
    printf("The sum of first %d natural number is %d", num, sumNumber(num));
}

int sumNumber(int n)
{
    if(n!=0)
    {
        return n + sumNumber(n-1);
    }
    else
    {
        return n;
    }
}
