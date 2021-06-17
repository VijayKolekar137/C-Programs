#include<stdio.h>
#include<conio.h>

int main()
{
    int num,multi,sum,ans;
    sum=0;
    num=0;

    printf("Enter the Number of multiplication table: ");
    scanf("%d",&num);

    printf("\n****** Multiplication Table ******\n");

    for(multi=1;multi<=10;multi++)
    {
        ans=num*multi;
        sum +=ans;
        printf("\t%d * %d = %d\n",num,multi,ans);
    }

    printf("\nSum of multiplication table of %d id %d\n",num,sum);

    return 0;
}
