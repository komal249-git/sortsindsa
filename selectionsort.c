#include <stdio.h>

void selectionsort(int arr[], int size)
{
    int i, j, min, temp;

    for (i = 0; i < size - 1; i++)
    {
        min = i;

        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

void printarray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[] = {8, 6, 5, 4, 1, 2};

    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    selectionsort(arr, size);

    printf("Sorted array:\n");
    printarray(arr, size);

    printf("\n");

    return 0;
}
