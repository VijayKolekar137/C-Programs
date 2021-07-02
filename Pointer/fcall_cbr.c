#include<stdio.h>

void wrong_swap(int a, int b);
void swap(int *a, int *b);

int main()
{
    int a = 4, b = 8;

    //Using call by value
    printf("Value of a = %d  and b = %d before the swap\n",a,b);
    wrong_swap(a,b);
    printf("Value of a = %d and b = %d after swap\n\n\n",a,b);

    //Using call by reference
    printf("Value of a = %d  and b = %d before the swap\n",a,b);
    swap(&a,&b);
    printf("Value of a = %d and b = %d after swap\n",a,b);


    return 0;
}

void wrong_swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
