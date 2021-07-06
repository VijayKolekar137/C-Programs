#include<stdio.h>

int main()
{
    int a = 4;
    int *ptr = &a;

    //Incrementing the integer pointer

    printf("The value of ptr is %d\n",ptr);
    ptr++;
    printf("The incremented value of ptr is %d\n",ptr);

    //Decrementing the integer pointer
    ptr--;
    printf("The Decremented value of ptr is %d\n",ptr);

    //Adding the integer from the integer pointer

    ptr = ptr + 1;
    printf("The ptr value after adding 1 : %d\n",ptr);

    //Subtracting the integer from the integer pointer
    ptr= ptr -1;
    printf("The ptr value after subtracting 1: %d\n\n",ptr);

    char c = 'A';
    char *ptrc = &c;

    //Incrementing the character pointer
    printf("The value of ptrc is %d\n",ptrc);
    ptrc++;
    printf("The incremented value of ptrc is %d\n",ptrc);

    //Decrementing the character pointer
    ptrc--;
    printf("The decremented value of ptrc is %d\n",ptrc);

    //Adding the integer from the character pointer

    ptrc = ptrc + 1;
    printf("The ptrc value after adding 1 : %d\n",ptrc);

    //Subtracting the integer from the character pointer
    ptrc = ptrc - 1;
    printf("The ptrc value after subtracting 1: %d\n\n",ptrc);

    return 0;
}
