#include <stdio.h>
func(int (*pa)[5], int *pb)
{
    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++)
            pb[i] = pb[i] + pa[i][j];
    printf("sum of Matrix is\n");
    for (i = 0; i < 4; i++)
        printf("%d \n", pb[i]);
}

int main()
{

    int i, j, a[4][5], b[4] = {0, 0, 0, 0};

    printf(" Enter Matrix\n");
    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++)
            scanf("%d", &a[i][j]);
    printf("Matrix is\n");
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    func(a, b);

    return 0;
}