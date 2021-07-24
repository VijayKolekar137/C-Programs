#include<stdio.h>

int main()
{
    FILE *ptr;
    int number = 13;

    ptr = fopen("generatedText.txt","w");
    fprintf(ptr,"The number is %d\n",number);
    fclose(ptr);

    return 0;
}
