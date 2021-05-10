#include<stdio.h>
#include<conio.h>

int main()
{
    /* Swaping number without function */

    int num1=0, num2=0, temp=0;

    printf("Enter any two number:");
    scanf("%d%d",&num1,&num2);

    printf("\n\nNumber's before swaping, Num1=%d, Num2=&%d",num1,num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("\n\nNumber's after swaping, Num1=%d, Num2=%d",num1,num2);

    getch();

    return 0;
}
