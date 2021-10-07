#include <stdio.h>
swapByRef(int *x, int *y)
{
    int t;
    t = *x;
    *x = *y;
    *y = t;
    printf("\n x=%d y=%d", *x, *y);
}
int main()
{
    int a = 10, b = 20;
    swapByRef(&a, &b);
    printf("\n a=%d b=%d", a, b);
    return 0;
}