#include<stdio.h>

//To calculate the positive integers and negative integers in an array

void check_po(int *arr,int n);

int main()
{
    int arr[] = {0,55,-5,66,-78,5,-65,14,-56,47,55,-5,-99,-565,44,-55,-64,-78,54,-5};

    check_po(arr,20);

    return 0;
}

void check_po(int *arr, int n)
{
    int po_count=0;
    int ne_count=0;
    for(int i=0;i<20;i++)
    {
        if(arr[i]>=0)
        {
            po_count++;
        }
        else
        {
            ne_count++;
        }
    }

    printf("Positive integer are %d\n",po_count);
    printf("Negative integer are %d\n",ne_count);

}
