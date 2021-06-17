#include<stdio.h>
#include<conio.h>

int main()
{
    //Multiplication table

    int num,a;

    printf("Enter the number: ");
    scanf("%d",&num);

    printf("Multiplication Table of %d\n",num);

    for(a=1;a<=10;a++)
    {
        printf("\t%d * %d = %d\n",num,a,num*a);
    }

    return 0;
}
