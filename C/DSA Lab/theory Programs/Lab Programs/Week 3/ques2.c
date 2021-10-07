#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter the elements of the array\n");
        scanf("%d", &a[i]);
    }
    int b[n];
    int j = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            b[j] = a[i];
            j = j + 1;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 1)
        {
            b[j] = a[i];
            j = j + 1;
        }
    }
    printf("The new array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", b[i]);
    }
    return 0;
}