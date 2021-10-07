#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A[3][4] = {{1, 2, 3, 4}, {2, 4, 6, 8}, {3, 5, 7, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", A[i][j]);
        }
        printf("\n");
    }

    printf("\n------\n");

    int *B[3], count;

    B[0] = (int *)malloc(4 * sizeof(int));
    B[1] = (int *)malloc(4 * sizeof(int));
    B[3] = (int *)malloc(4 * sizeof(int));

    count = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            B[i][j] = ++count;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", B[i][j]);
        }
        printf("\n");
    }

    int **C,
        value;
    C = (int **)malloc(3 * sizeof(int));
    C[0] = (int *)malloc(4 * sizeof(int));
    C[1] = (int *)malloc(4 * sizeof(int));
    C[2] = (int *)malloc(4 * sizeof(int));

    value = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            C[i][j] = ++value;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}