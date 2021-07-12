#include<stdio.h>
#include<string.h>

int main()
{
    char *st1 = "Hello World";
    char st2[30];
    strcpy(st2,st1);
    printf("Now the string st2 is %s",st2);

    return 0;
}
