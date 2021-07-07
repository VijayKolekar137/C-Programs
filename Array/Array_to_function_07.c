#include<stdio.h>

int printArr(int *ptr, int n)
{
    for(int i=0; i<n ; i++)
    {
        printf("The the %d element is %d\n",i+1,ptr[i]);
    }
    ptr[3] = 1307; // It changes the element at the 3rd position
}

int main()
{
    int arr[] = {55,78,64,656,45};
    printArr(arr,5);
    printf("\n\n");
    printArr(arr,5);

    return 0;
}
