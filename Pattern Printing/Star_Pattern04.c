#include<stdio.h>

//To print the following star pattern

//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *
//  * * * * *

int main()

{
    int n=5;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}




