#include<stdio.h>

int main()
{
    int num=0;
    FILE *ptr;

    printf("Enter the number to print the multiplication table: ");
    scanf("%d",&num);

    ptr = fopen("mult_table.txt","w");

    fprintf(ptr,"Multiplication table of %d\n\n",num);

    for(int i=0; i<10; i++)
    {
        fprintf(ptr,"\t%d*%d = %d\n",num,i+1,num*(i+1));
    }

    printf("The multiplication table of %d is successfully generated",num);

    fclose(ptr);

    return 0;
}
