#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *ptr;
    float *ptr2;
    ptr = (float *)malloc(6 * sizeof(float));

    for (int i = 0; i < 6; i++)
    {
        ptr2 = (float *)malloc(60000 * sizeof(float));

        printf("Enter the Value of %d is\n", i);

        scanf("%f", &ptr[i]);
        free(ptr2); //it wil deallocate memory
    }
    for (int i = 0; i < 6; i++)
    {
        printf("Value of %d is %f\n", i, ptr[i]);
    }
    return 0;
}