#include<stdio.h>

void decrypt(char *st)
{
    char *ptr = st;
    while(*ptr !='\0')
    {
        *ptr = *ptr - 1;
        *ptr++;
    }
}

int main()
{
    char st[] = "Ifmmp!Xpsme";  //Enter the Encrypted text here.
    decrypt(st);

    printf("The decrypted string is: %s",st);

    return 0;
}
