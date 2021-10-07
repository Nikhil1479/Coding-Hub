#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    ptr = (float *)malloc(6 * sizeof(float));

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the Value of %d is\n", i);

        scanf("%f", &ptr[i]);
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Value of %d is %f\n", i, ptr[i]);
    }
    return 0;
}