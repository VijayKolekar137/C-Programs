#include<stdio.h>

int main()
{
    FILE *ptr;

    ptr = fopen("basic.txt","r"); //For the reading the file.

    ptr = fopen("basic.txt","w"); //For the writing the file.

    return 0;
}
