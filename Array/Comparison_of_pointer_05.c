#include<stdio.h>

int main()
{
    int arr[3]={54,48,96};
    int *ptr1 = &arr[0];
    int *ptr2 = &arr[1];
    int *ptr3 = &arr[2];
    int Result;
    int addlo;

    if(ptr1 == ptr2)
    {
        printf("Yes");
    }
    else
    {
        printf("NO");
    }

    Result = *ptr1 - *ptr2;

    printf("\nThe subtraction of arr[1] and arr[0] is %d",Result);

    addlo = ptr3 - ptr1;

    printf("\nLocation = %d",addlo);

    return 0;
}
