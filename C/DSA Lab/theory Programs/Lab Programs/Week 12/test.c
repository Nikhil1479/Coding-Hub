#include <stdio.h>
void swap(int *a, int *b);
void bubbleSort(int array[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        int f = 0;
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {

                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                f = 1;
            }
        }
        if (f == 0)
        {
            break;
        }
    }
}

void insertionSort(int array[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int key = array[i];
        int j = i - 1;
        while (key < array[j] && j >= 0)
        {
            array[j + 1] = array[j];
            --j;
        }
        array[j + 1] = key;
    }
}

void HeapSorting(int arr[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(&arr[i], &arr[largest]);
        HeapSorting(arr, n, largest);
    }
}
void heapSort(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        HeapSorting(arr, n, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        swap(&arr[0], &arr[i]);
        HeapSorting(arr, i, 0);
    }
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (array[j] < array[min])
                min = j;
        }
        swap(&array[min], &array[i]);
    }
}
void printArray(int array[], int size)
{
    int choice;
    printf("if you want ascending order enter 1 and for descending enter 2 ->");
    scanf("%d", &choice);
    if (choice == 1)
    {
        for (int i = 0; i < size; ++i)
        {
            printf("%d  ", array[i]);
        }
        printf("\n");
    }
    else
    {
        for (int i = (size - 1); i >= 0; --i)
        {
            printf("%d  ", array[i]);
        }
        printf("\n");
    }
}
void main()
{
    int n;
    int i = 0;
    int arr[n];
    printf("Enter the size of the array");
    scanf("%d", &n);
    printf("\nEnter the unsorted array\n");
    for (i = 0; i < n; i++)
    {
        scanf("\n%d", &arr[i]);
    }
    int ch;
    printf("Enter your choice\n");
    printf("1 -> Bubble Sort\n");
    printf("2 -> Selection Sort\n");
    printf("3 -> Heap Sort\n");
    printf("4 -> Insertion Sort\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        bubbleSort(arr, n);
        printArray(arr, n);
        break;

    case 2:
        selectionSort(arr, n);
        printArray(arr, n);

        break;

    case 3:
        heapSort(arr, n);
        printArray(arr, n);
        break;

    case 4:
        insertionSort(arr, n);
        printArray(arr, n);
        break;

    default:
        printf("Wrong choice Entered");
        break;
    }
}
