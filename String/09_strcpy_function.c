#include<stdio.h>

void own_strcpy(char *st_target, char *st_source)
{
    int i=0;

    while(i<30)
    {
        st_target[i] = st_source[i];
        i++;
    }
}

int main()
{
    char st_source[] = "Hello";
    char st_target[30];

    own_strcpy(st_target,st_source);

    printf("Now the string st_target is %s",st_target);

    return 0;
}
