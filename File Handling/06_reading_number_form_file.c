#include<stdio.h>

int main()
{
    FILE *ptr;
    int a,b,c;

    ptr = fopen("number.txt","r");

    fscanf(ptr,"%d %d %d",&a,&b,&c);

    printf("The value of a,b and c is %d,%d and %d respectively.\n",a,b,c);

    fclose(ptr);

    return 0;
}
