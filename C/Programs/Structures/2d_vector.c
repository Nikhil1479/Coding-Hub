#include <stdio.h>
#include <stdlib.h>

struct vector
{
    int x;
    int y;
};

int main()
{
    struct vector v1, v2;
    v1.x = 54;
    v2.x = 43;
    v1.y = 54;
    v2.y = 70;

    printf("Value of X1 dim is %d\nValue of Y1 dim is %d\nValue of X2 dim is %d\nValue of Y2 dim is %d\n", v1.x, v1.y, v2.x, v2.y);
    return 0;
}