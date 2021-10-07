#include <stdio.h>
int main()
{
    int i, n = 4, j, marks[4];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("Marks is %d\n", marks[i]);
    }

    return 0;
}