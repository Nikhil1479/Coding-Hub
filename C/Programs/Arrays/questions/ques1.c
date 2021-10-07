#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *ptr = &arr[0]; //or ptr = arr;
    ptr = ptr + 2;
    if (ptr == &arr[2])
    {
        printf("These Points to same Location\n");
        printf("Value of ptr: %d\n", *ptr);
    }
    else
    {
        printf("These do not points to the same location in memory");
    }
    return 0;
}