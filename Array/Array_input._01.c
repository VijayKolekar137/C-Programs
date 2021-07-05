#include<stdio.h>

int main()
{
    int Marks[4];

    printf("Enter the mark of 1 student: ", Marks[0]);
    scanf("%d",&Marks[0]);
    printf("Enter the mark of 2 student: ", Marks[1]);
    scanf("%d",&Marks[1]);
    printf("Enter the mark of 3 student: ", Marks[2]);
    scanf("%d",&Marks[2]);
    printf("Enter the mark of 4 student: ", Marks[3]);
    scanf("%d",&Marks[3]);

    printf("\n\n\nThe mark of 1 student: %d\n",Marks[0]);
    printf("The mark of 2 student: %d\n",Marks[1]);
    printf("The mark of 3 student: %d\n",Marks[2]);
    printf("The mark of 4 student: %d\n",Marks[3]);

    return 0;
}
