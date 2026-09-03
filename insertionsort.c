#include <stdio.h>
void insertionsort(int arr[], int size)
{
    int i,j,key;
    for(i=1 ;i<size;i++)
    {
        key=arr[i];

        for(j=i-1; j>=0 && arr[j]>key;j--)
        {
            arr[j+1]=arr[j];

        }
        arr[j+1]=key;
    }
}

void printarray(int arr[],int size)
{
    for (int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}



int main()
{
    int arr[]={8,6,5,4,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("original array:\n");

    for(int i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    printf("\n");

    insertionsort(arr, size);

    printf("sorted array:\n");
    printarray(arr, size);
    printf("\n");
    return 0;
}
