#include <stdio.h>

void reverse(int arr[], int start, int end) //Reverse function prototype
{
    int temp;
    while (start < end)
    {
        temp = arr[start]; //Swapping
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void print_Array(int arr[], int n)
{
    printf("Reversed Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = 6;
    printf("Original Array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    printf("\n");
    reverse(arr, 0, n - 1);
    print_Array(arr, n);
    return 0;
}