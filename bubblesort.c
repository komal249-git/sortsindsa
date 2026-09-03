#include <stdio.h>

void bubblesort(int arr[], int size)
{
    int i, j, temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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

    bubblesort(arr, size);

    printf("Sorted array:\n");
    printarray(arr, size);

    printf("\n");

    return 0;
}
