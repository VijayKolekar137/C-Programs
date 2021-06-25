#include<stdio.h>

//To print following star pattern

// *   *
// *   *
// *****
// *   *
// *   *

int main()
{
    int n=5;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==1 || j==n || i==n/2+1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
