#include<stdio.h>
#include<conio.h>

int main()
{
    printf("\n\n*********************  CHARACTER OF GIVEN ASCII VALUE  *********************\n\n");

    int num =0;

    printf("Enter the ASCII value to print it's character = ");
    scanf("%d",&num);

    printf("Given ASCII value %d and it's Character = %c",num,num);

    getch();

    return 0;
}
