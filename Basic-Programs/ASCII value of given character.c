#include<stdio.h>
#include<conio.h>

int main()
{

    printf("\n\n********************* ASCII VALUE OF GIVEN CHARACTER *********************\n\n");

    char ch;

    printf("Enter the character to prints it's ASCII Value = ");
    scanf("%c",&ch);

    printf("The given character %c and it's ASCII Value = %d.",ch,ch);

    getch();

    return 0;
}
