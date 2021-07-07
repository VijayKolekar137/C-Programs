#include<stdio.h>

//To print the multiplication table using user input.

int main()
{
    int n =0;
    int mul[10];

    printf("Enter the number to print it's multiplication table: ");
    scanf("%d",&n);

    for(int i=0; i<10; i++)
    {
        mul[i] = n*(i+1);
    }

    for(int i=0;i<10; i++)
    {
        printf("\t%d * %d = %d\n",n,i+1,mul[i]);
    }

    return 0;
}
