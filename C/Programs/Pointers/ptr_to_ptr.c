#include <stdio.h>

int main()
{

    int i = 5;
    int *ptr = &i;
    int **ptr_ptr = &ptr;

    printf("Value of i is %d", **ptr_ptr);

    return 0;
}