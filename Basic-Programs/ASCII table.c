#include<stdio.h>
#include<conio.h>

int main()
{
    printf("\t\t ASCII TABLE \t\t\n\n");

    int i = 0;

    for(i=0; i<128; i++)
    {
        printf("ASCII Value for %d = %c \n",i,i);

    }

    getch();

    return 0;
}
