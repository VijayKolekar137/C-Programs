#include<stdio.h>
#include<math.h>

int main()
{
    //By hardcode

    int length, area;

    length = 4;

    area= 4*4;

    printf("Area of square is %d \n",area);

    //By user input

    printf("Enter the length of square \n");
    scanf("%d",&length);

    printf("Area of square is %d",length*length);

    return 0;
}
