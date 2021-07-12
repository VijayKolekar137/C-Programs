#include<stdio.h>
#include<string.h>

int main()
{
    char st1[20] = "Hello";   //It dose not add any space.
    char *st2 = "World";

    strcat(st1,st2);

    printf("Concatation of st1 and st2 is %s",st1);

    return 0;
}
