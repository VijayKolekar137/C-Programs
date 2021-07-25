#include<stdio.h>

int main()
{
    FILE *ptr;
    int num=0;
    int result=0;

    ptr = fopen("sample_value.txt","r");
    fscanf(ptr,"%d",&num);

    result = num * 2;

    ptr = fopen("sample_value.txt","w");
    fprintf(ptr,"%d",result);

    return 0;
}
