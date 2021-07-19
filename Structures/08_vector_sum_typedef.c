#include<stdio.h>

typedef struct vector
{
    int x;
    int y;
}vec;

vec vectorSum(vec v1,vec v2)
{
    vec result;

    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;

    return result;
};

int main()
{
    vec v1,v2,sum;

    v1.x = 5;
    v1.y = 7;

    printf("V1: X dim is %d and Y dim is %d\n",v1.x,v1.y);

    v2.x = 9;
    v2.y = 2;

    printf("V2: X dim is %d and Y dim is %d\n",v2.x,v2.y);

    sum = vectorSum(v1,v2);

    printf("X dim result is %d and Y dim result is %d",sum.x,sum.y);

    return 0;
}
