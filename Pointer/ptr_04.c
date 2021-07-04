#include<stdio.h>

void SumAndAvg(int i, int j, int *sum, float *avg);

int main()
{
    int a = 10, b = 5, sum=0;
    float avg =0;

    SumAndAvg(a,b,&sum,&avg);

    printf("The sum of a and b is %d\n",sum);
    printf("The average of a and b is %f\n",avg);

    return 0;
}

void SumAndAvg(int i, int j, int *sum, float *avg)
{
    *sum = i+j;
    *avg = (float)(*sum)/2;
}
