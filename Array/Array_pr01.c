#include<stdio.h>

int main()
{
    int arr[10];
    int *ptr = &arr[0];

    ptr = ptr + 2;

    if(ptr==&arr[2])
    {
        printf("It is pointing to the same location\n");
    }
    else
    {
        printf("It is dose not pointing to the same location\n");
    }

    printf("Address of ptr is %u\n",ptr);
    printf("Address of arr[2] is %u\n",&arr[2]);

    return 0;
}
