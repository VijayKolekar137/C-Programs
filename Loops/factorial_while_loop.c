#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int i=1,num=0,fact=1;

    printf("Enter the number: ");
    scanf("%d",&num);

    while(i<=num)
    {
        fact*=i;
        i++;
    }

    printf("\nFactorial of %d is %d",num,fact);

    return 0;
}
