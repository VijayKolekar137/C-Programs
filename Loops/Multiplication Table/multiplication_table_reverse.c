#include<stdio.h>
#include<conio.h>

int main()
{
    int num,a;

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("\nMultiplication table in reversed order\n");

    for(a=10;a;a--)
    {
        printf("\t%d * %d = %d\n",num,a,num*a);
    }

    return 0;
}
