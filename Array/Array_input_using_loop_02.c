#include<stdio.h>

int main()
{
    int Marks[5];

    for(int i=0; i<5; i++)
    {
        printf("Enter the mark of %d Student: ",i+1);
        scanf("%d",&Marks[i]);
    }

    for(int i=0; i<5;i++)
    {
        printf("The mark of %d student is %d\n",i+1,Marks[i]);
    }

    return 0;
}
