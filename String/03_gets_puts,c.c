#include<stdio.h>

int main()
{
    char a[30];

    printf("Enter your full name: ");
    gets(a);
    puts(a);

    printf("Your full name is %s",a);

    return 0;
}
