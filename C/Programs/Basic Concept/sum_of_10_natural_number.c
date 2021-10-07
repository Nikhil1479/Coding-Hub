#include <stdio.h>

int main()
{
    int i, sum = 0, n;
    pritnf("Enter the NUmber\n");
        scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        sum += i;
    }
    printf("Sum of 10 natural number is %d", sum);
    return 0;
}