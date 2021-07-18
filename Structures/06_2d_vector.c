#include<stdio.h>

struct Vector
{
    int x;
    int y;
};

int main()
{
    struct Vector v1,v2;
    v1.x = 54;
    v1.y = 86;

    printf("X dim is %d and Y dim is %d for v1\n",v1.x,v1.y);

    v2.x = 66;
    v2.y = 78;

    printf("X dim is %d and Y dim is %d for v2\n",v2.x,v2.y);

    return 0;
}
