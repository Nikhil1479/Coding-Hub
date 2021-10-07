#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr = NULL;

    int len = 0, i;

    printf("Input the Size of Array: ");
    scanf("%d", &len);

    ptr = (int *)malloc(len * sizeof(int));

    printf("Enter the elements of Array\n");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &ptr[i]);
    }
    printf("Array Elements: \n");
    for (i = 0; i < len; ++i)
    {
        printf("%d,", ptr[i]);
    }
    free(ptr);

    return 0;
}