#include<stdio.h>

void slice(char *st,int m, int n)
{
    int i=0;

    while((m+i)<n)
    {
        st[i] = st[m+i];
        i++;
    }
    st[i] = '\0';
}

int main()
{
    char st[] = "Hello World";
    slice(st,2,10);
    printf("The slice of string is %s",st);

    return 0;
}
