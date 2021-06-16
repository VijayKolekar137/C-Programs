#include<stdio.h>

int main()
{
    //By hardcode

    int length, breadth, area;

    length = 10;

    breadth = 3;

    area = length*breadth;

    printf("Area of rectangle is %d \n",area);

    //By using user input

    printf("Enter the length of rectangel: \n");
    scanf("%d",&length);

    printf("Enter the breadth of rectangel: \n");
    scanf("%d",&breadth);

    printf("Area of rectangle is %d", length*breadth);

    return 0;
}
