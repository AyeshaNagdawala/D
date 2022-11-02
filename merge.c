#include <stdio.h>

void merge(int arr[], int low, int mid, int high)
{
    int i, j, k;

    int brr[7];
    for (int i = low; i <= high; i++)
    {
        brr[i] = arr[i];
    }

    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (brr[i] <= brr[j])
        {
            arr[k++] = brr[i++];
        }
        else
        {
            arr[k++] = brr[j++];
        }
    }

    while (i <= mid)
    {
        arr[k++] = brr[i++];
    }
    while (j <= high)
    {
        arr[k++] = brr[j++];
    }
}

void mergesort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;
        mergesort(arr, low, mid);
        mergesort(arr, mid + 1, high);
        merge(arr, low, mid, high);
    }
}

void printarray(int arr[], int size)
{
    printf("The sorted array : \n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    printf("Welcomr to MErge Sort!!!\n");
    int size;
    printf("Enter the size of array : ");
    scanf("%d", &size);
    int arr[size];

    printf("Enter the values: ");
    for(int i=0 ; i<size ; i++)
    {
        scanf("%d",&arr[i]);
    }

    // int arr[] = {10, 4, 3, 2, 1, 5, 6};

    // int low = 0, high = 6;
    mergesort(arr, 0, size - 1);
    printarray(arr, size);

    return 0;
}
