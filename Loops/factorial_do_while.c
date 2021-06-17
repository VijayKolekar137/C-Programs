#include<stdio.h>
#include<conio.h>

int main()
{
    int i=1 , n, factorial=1;

    printf("Enter the number: ");
    scanf("%d",&n);

    do{
        factorial *= i;
        i++;
    }while(i<=n);

    printf("Factorial of %d is %d",n,factorial);

    return 0;
}
