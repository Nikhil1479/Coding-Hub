#include <stdio.h>

void print_array(int *ptr, int n) //==> ptr[]
{
    for (int i = 0; i < n; i++)
    {
        printf("The value of element %d is %d\n", i + 1, *ptr + i); //*ptr+i ==> ptr[i]
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    print_array(arr, 7);

    return 0;
}