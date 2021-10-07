#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the number\n");
    scanf("%d", &n);
    for (i = 0; i <= 10; i++)
        printf("%d X %d = %d\n", n, i, n * i);
    return 0;
}