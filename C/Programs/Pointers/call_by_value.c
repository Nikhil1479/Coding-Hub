#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b);

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("Value of sum is %d", sum(a, b));
    return 0;
}

int sum(int a, int b)
{
    return a + b;
}