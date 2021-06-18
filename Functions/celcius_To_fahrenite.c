#include<stdio.h>

float fahren(float cel);

int main()
{
    float temp=0;

    printf("Enter the temprature in the celcius: ");
    scanf("%f",&temp);

    printf("The %.2f celcius is equal to the %.2f fahrenheit", temp, fahren(temp));

    return 0;
}

float fahren(float cel)
{
    float fah;

    fah = ((cel * 9/5) + 32);

    return fah;
}
