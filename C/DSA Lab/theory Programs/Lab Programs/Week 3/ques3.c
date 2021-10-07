// You are given an array of 0's and 1's .
// Arrange the zeros on left side and 1's on right side while traversing only once
#include <stdio.h>

void segregate(int arr[], int n)
{
    int left_side = 0, right_side = n - 1;

    while (left_side < right_side)
    {
        while (arr[left_side] == 0 && left_side < right_side)
            left_side++;

        while (arr[right_side] == 1 && left_side < right_side)
            right_side--;

        if (left_side < right_side)
        {
            arr[left_side] = 0;
            arr[right_side] = 1;
            left_side++;
            right_side--;
        }
    }
}

int main()
{
    int arr[50], i, n = 10;
    printf("Enter the Elements of Array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    segregate(arr, n);
    printf("After Arranging\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}