#include<stdio.h>
#include<conio.h>

int main()
{
    int lower, upper, multi;

    printf("Enter the lower limit: ");
    scanf("%d",&lower);

    printf("Enter the upper limit: ");
    scanf("%d",&upper);


    while(lower<=upper)
    {
        printf("\nMultiplication table of %d\n\n",lower);

        for(multi=1;multi<=10;multi++)
        {
            printf("\t%d * %d = %d\n",lower,multi,lower*multi);
        }
        lower++;
    }
    getch();

    return 0;
}
