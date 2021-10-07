#include <stdio.h>
int main()
{
    int i, j, n, c = 0, d = 0;
    printf("enter no. of rows and column->");
    scanf("%d", &n);
    int a[n][n], b[n][n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("enter data for a[%d][%d]->", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("matrix is->\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] == 0)
            {
                c++;
            }
        }
    }
    if (c > (n * n * 0.4))
    {
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                b[j][i] = a[i][j];
            }
        }
        printf("transpose matrix->\n");
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("%d ", b[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Input Matrix is not a Sparse Matrix\n");
    }
    return 0;
}