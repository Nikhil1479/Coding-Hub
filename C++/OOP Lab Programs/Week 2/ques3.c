#include <stdio.h>
#include <stdlib.h>

int main()
{

    int i, n = 5;
    double *value;

    value = (double *)calloc(n, sizeof(double));
    if (value == NULL)
    {
        printf("No data found to be allocated\n");
        exit(0);
    }
    for (i = 0; i < n; ++i)
    {
        printf("Enter Number %d: ", i + 1);
        scanf("%lf", value + i);
    }
    for (i = 1; i < n; ++i)
    {
        if (*value < *(value + i))
        {
            *value = *(value + i);
        }
    }
    printf("Largest Number = %.2lf", *value);
    free(value);
    return 0;
}