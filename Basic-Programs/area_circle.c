#include<stdio.h>

int main()
{
    //By hardcode

    printf("**************** BY HARDCODE ****************\n");

    int radius;

    float pi, area, Area;

    radius = 4;
    pi= 3.14;

    area = radius*pi*pi;

    printf("\tArea of Circle is %f \n",area);

    //By user input

    printf("**************** BY USER INPUT ****************\n");

    printf("Enter the radius: \n");
    scanf("%d",&radius);

    Area = radius*pi*pi;

    printf("\tThe area of circle for the given radius is %f",Area);


    return 0;
}
