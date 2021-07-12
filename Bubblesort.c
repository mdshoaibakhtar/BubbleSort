#include<stdio.h>

void printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void bubbleSort(int arr[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j]>arr[j+1])
            {
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1]=temp;
            }
        }
    } 
}
int main()
{
    int arr[]={12,45,78,2,1,6,11,457,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("unSorted Array\n");
    printArray(arr,size);
    printf("Sorted Array\n");
    bubbleSort(arr,size);
    printArray(arr,size);

    return 0;
}
