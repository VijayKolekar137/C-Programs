#include<stdio.h>

int main()
{
    int n_Student = 3;
    int n_Subjent = 4;

    int Marks[3][4];

    for(int i=0; i<n_Student; i++)
    {
        for(int j=0; j<n_Subjent; j++)
        {
            printf("Enter the %d student marks of %d subject: ",i+1,j+1);
            scanf("%d",&Marks[i][j]);
        }
    }

    for(int i=0; i<n_Student; i++)
    {
        for(int j=0; j<n_Subjent; j++)
        {
            printf("The mark of %d student for %d subject is : %d\n",i+1,j+1,Marks[i][j]);
        }
    }

    return 0;
}
