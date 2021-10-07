#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p, *q;

    p = (int *)malloc(5 * sizeof(int));
    q = (int *)malloc(10 * sizeof(int));

    printf("Enter 5 elemnts of dynamic array\n");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("Printing Elements...\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d  ", p[i]);
    }

    printf("\n\nIncreasing Array Size...\n");

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i]; //transvering elements of p array to q array
    }

    free(p);
    p = q; //p is pointing to q array
    q = NULL;
    printf("Array Size Increased\n\n");

    printf("Enter 10 elements in increased array:\n");
    for (int i = 5; i < 10; i++)
    {
        scanf("%d", &p[i]);
    }

    printf("Printing Elements...\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", p[i]);
    }

    return 0;
}