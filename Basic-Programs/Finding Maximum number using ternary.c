#include<stdio.h>
#include<conio.h>

int main()
{

    int num1 =0;
    int num2 =0;

    printf("Enter to number to check the maximum = ");
    scanf("%d%d",&num1,&num2);

    (num1>num2)?printf("%d is maximum",num1):printf("%d is maximum",num2);

    getch();

    return 0;

}
