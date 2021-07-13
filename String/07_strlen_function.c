#include<stdio.h>

int Own_Strlen(char *st)
{
    char *ptr = st;
    int len =0;
    while(*ptr !='\0')
    {
        len++;
        ptr++;
    }
    return len;
}

int main()
{
    char st[] = "Hello";
    int length = Own_Strlen(st);

    printf("The length of string is %d",length);

    return 0;
}
