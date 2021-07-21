#include<stdio.h>

typedef struct complex
{
    int real;
    int imaginary;
}comp;

void display(comp c)
{
    printf("The real part is %d\n",c.real);
    printf("The imaginary part is %d\n",c.imaginary);
}

int main()
{
    comp cnums[5];

    for(int i=0; i<5;i++)
    {
        printf("Enter the real part for %d number: ",i+1);
        scanf("%d",&cnums[i].real);

        printf("Enter the imaginary part for %d number : ",i+1);
        scanf("%d",&cnums[i].imaginary);
    }

    for(int i=0;i<5;i++)
    {
        display(cnums[i]);
    }

    return 0;
}
