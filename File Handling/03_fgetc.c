#include<stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("fgetcDemo.txt","r");

    //char c = fgetc(ptr);

    printf("The file contains text like: %c\n",fgetc(ptr));
    printf("The file contains text like: %c\n",fgetc(ptr));
    printf("The file contains text like: %c\n",fgetc(ptr));
    printf("The file contains text like: %c\n",fgetc(ptr));
    printf("The file contains text like: %c\n",fgetc(ptr));
    printf("The file contains text like: %c\n",fgetc(ptr));
    printf("The file contains text like: %c\n",fgetc(ptr));

    fclose(ptr);

    return 0;
}
