#include<stdio.h>

int main()
{
    FILE *ptr;
    int num,num2;

    ptr = fopen("Sample.txt","r");

    if(ptr == NULL)
    {
        printf("This file dose not exist.\n");
    }
    else
    {
        fscanf(ptr,"%d",&num);
        fscanf(ptr,"%d",&num2);
        fclose(ptr);

        printf("The num is %d\n",num);
        printf("The num2 is %d\n",num2);
    }


    return 0;
}
