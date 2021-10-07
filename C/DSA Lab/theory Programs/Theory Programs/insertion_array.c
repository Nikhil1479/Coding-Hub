#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of elements to be input in an Array: ");
    scanf("%d", &n);
    int arr[100] = {0}, pos, i, element;
    for (i = 0; i < n; i++)
    {
        printf("Enter the array %d: \n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Entered Array is: %d\n", arr[i]);
    }

    for (i = n - 1; i >= pos; i--)
    {
    }
    return 0;
}