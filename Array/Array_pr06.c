#include<stdio.h>

//To print the multiplication table of 3 numbers.

int MulTable(int *mul_tbl,int num,int n)
{
    printf("The multiplication table of %d\n\n",num);

    for(int i=0;i<n;i++)
    {
        mul_tbl[i] = num*(i+1);
    }

    for(int i=0;i<n;i++)
    {
        printf("\t%d*%d = %d\n",num,i+1,mul_tbl[i]);
    }

    printf("\n\n");
}

int main()
{
    int mul_tbl[4][10];
    MulTable(mul_tbl[0],2,10);
    MulTable(mul_tbl[1],7,10);
    MulTable(mul_tbl[2],9,10);
    MulTable(mul_tbl[3],9,10);
    return 0;
}
