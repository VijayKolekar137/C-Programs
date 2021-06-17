#include<stdio.h>
#include<conio.h>

int main()
{
    int start, end, multi;

    printf("Enter the start number: ");
    scanf("%d",&start);

    printf("Enter the end number: ");
    scanf("%d",&end);

    if(start>end)
    {
        while(start>=end)
        {
            printf("\nMultiplication table of %d\n\n",start);

            for(multi=1;multi<=10;multi++)
            {
                printf("\t%d * %d = %d\n", start, multi, start*multi);
            }
            start--;
        }
    }
    else
    {
         while(start<=end)
        {
            printf("\nMultiplication table of %d\n\n",start);

            for(multi=1;multi<=10;multi++)
            {
                printf("\t%d * %d = %d\n", start, multi, start*multi);
            }
            start++;
        }
    }
    return 0;
}
