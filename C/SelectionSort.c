#include <stdio.h>
void selectionSort(int arr[], int size);
void swap(int *a, int *b);

void selectionSort(int arr[], int size)
{
    int i, j;
    for (i = 0 ;  i < size;i++)
    {
        for (j = i ; j < size; j++)
        {
            if (arr[i] > arr[j])
                swap(&arr[i], &arr[j]);
        }
    }
}

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int array[10], i, size;
    printf("How many numbers you want to sort:  ");
    scanf("%d", &size);
    printf("\nEnter %d numbers\t", size);
    printf("\n");
    for (i = 0; i < size; i++)
        scanf("%d", &array[i]);
    selectionSort(array, size);
    printf("\nSorted array is ");
    for (i = 0; i < size;i++)
        printf(" %d ", array[i]);
    return 0;
}