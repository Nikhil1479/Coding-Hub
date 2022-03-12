#include <stdio.h>
#include <stdlib.h>

void display(int a[], int n);
void bubble_sort(int a[], int n);
void selection_sort(int a[], int n);
void insertion_sort(int a[], int n);
void heap_sort(int a[], int n);
void heap(int a[], int n, int i);
void swap(int *a, int *b);

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", arr[i]);
    }
}

void bubble_sort(int arr[], int n)
{
    int i, j, temp, choice = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Elements After Bubble Sort in ascending order: ");
    display(arr, n);
    printf("\nDo You want to Print array in descending order [1/0]: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int i, j, temp, choice = 0;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
    printf("\nElements after Bubble Sort in Descending Order: ");
    display(arr, n);
}

void selection_sort(int arr[], int n)
{
    int i, j, temp, choice = 0;
    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("\nElements After Selection Sort in Ascending Order: ");
    display(arr, n);

    printf("\nDo You want to Print Elements in Descending Order[1/0]: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int i, j, temp, choice = 0;
        for (i = 0; i < n - 1; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    display(arr, n);
}

void insertion_sort(int arr[], int n)
{
    int i, j, min, choice = 0;
    for (i = 1; i < n; i++)
    {
        min = arr[i];
        j = i - 1;
        while (min < arr[j] && j >= 0)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = min;
    }
    printf("After Insertion sort Elements in Ascending Order are : ");
    display(arr, n);

    printf("\nDo you want to print array in Descending Order [1/0]: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int i, j, min, choice = 0;
        for (i = 1; i < n; i++)
        {
            min = arr[i];
            j = i - 1;
            while (min > arr[j] && j >= 0)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = min;
        }
    }
    printf("\nAfter Insertion Sort Elements in Descending Order are: ");
    display(arr, n);
}

void heapify(int a[], int n, int i)
{
    int smallest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && a[l] < a[smallest])
        smallest = l;

    if (r < n && a[r] < a[smallest])
        smallest = r;

    if (smallest != i)
    {
        swap(&a[i], &a[smallest]);

        heapify(a, n, smallest);
    }
}
void heap(int a[], int n, int i)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && a[left] > a[largest])
        largest = left;

    if (right < n && a[right] > a[largest])
        largest = right;

    if (largest != i)
    {
        swap(&a[i], &a[largest]);
        heap(a, n, largest);
    }
}
void heap_sort(int a[], int n)
{
    int choice = 0;
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heap(a, n, i);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        swap(&a[0], &a[i]);
        heap(a, i, 0);
    }
    printf("Elements After Heap Sort in Ascending Order: \n");
    display(a, n);

    printf("\nDo you want to Sort Elements in Descending Order[1/0]: \n");
    scanf("%d", &choice);

    if (choice == 1)
    {
        for (int i = n / 2 - 1; i >= 0; i--)
            heapify(a, n, i);

        for (int i = n - 1; i >= 0; i--)
        {

            swap(&a[0], &a[i]);

            heapify(a, i, 0);
        }
    }
    printf("Elements After Heap Sort in Descending Order [1/0]: ");
    display(a, n);
}
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main()
{
    int n, choice, i;
    char ch[20];
    printf("Enter no. of elements u want to sort : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter %d Element : ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("\nPlease select any option Given Below for Sorting : \n");

    while (1)
    {

        printf("\n1. Bubble Sort\n2. Selection Sort\n3. Insertion Sort\n4. Heap Sort\n5. Display Array.\n6. Exit the Program.\n");
        printf("\nEnter your Choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            bubble_sort(arr, n);
            break;
        case 2:
            selection_sort(arr, n);
            break;
        case 3:
            insertion_sort(arr, n);
            break;
        case 4:
            heap_sort(arr, n);
            break;
        case 5:
            display(arr, n);
            break;
        case 6:

        default:
            printf("\nPlease Select only 1-5 option ----\n");
        }
    }
}
