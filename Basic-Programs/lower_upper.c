#include<stdio.h>

int main()
{
    char alpha;

    printf("Enter any alphabate \n");
    scanf("%c",&alpha);

    if(alpha<=122 && alpha>=97)
    {
        printf("The alphabate %c is lowercase",alpha);
    }
    else if(alpha<=90 && alpha>=65)
    {
        printf("The alphabate %c is uppercase",alpha);
    }
    else
    {
        printf("Please enter only alphabates");
    }

    return 0;
}
