#include<stdio.h>

void cheak_char(char *st, char c)
{
    char *ptr = st;

    while(*ptr !='\0')
    {
        if(*ptr == c)
        {
            printf("The string has the character\n");
            break;
        }
        ptr++;
    }

}

int main()
{
    char st[] = "Hello";
    cheak_char(st,'l');

    return 0;
}
