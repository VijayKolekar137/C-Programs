#include<stdio.h>

int main()
{
    char str[] = {'H','e','l','l','o','\0'};
    //char str[]="Hello";
    char *ptr = str;

    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        *ptr++;
    }
}
