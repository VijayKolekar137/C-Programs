#include<stdio.h>

// To print the following type of star pattern
//    *
//   **
//  ***
// ****
//*****


int main()
{
    int n=0;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i+j>=(n-1))
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
    return 0;
}
