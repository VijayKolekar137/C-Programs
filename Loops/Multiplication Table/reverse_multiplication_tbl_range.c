#include<stdio.h>
#include<conio.h>

int main()
{
    int start, end, multi;

    printf("Enter the start number: ");
    scanf("%d",&start);

    printf("Enter the end number: ");
    scanf("%d",&end);

    while(start<=end)
    {
        printf("\nReversed multiplication table of %d\n\n",start);

        for(multi=10;multi;multi--)
        {
            printf("\t%d * %d = %d\n",start,multi,start*multi);
        }
        start++;
    }
    return 0;
}
