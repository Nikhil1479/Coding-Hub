#include <stdio.h>
#include <stdlib.h>

typedef struct vector
{
    int x;
    int y;
} vector;

vector sumVector(vector a, vector b)
{
    vector result;
    result.x = a.x + b.x;
    result.y = a.y + b.y;
}
int main()
{
    struct vector v1, v2, sum;
    v1.x = 54;
    v2.x = 43;
    v1.y = 54;
    v2.y = 70;

    // printf("Value of X1 dim is %d\nValue of Y1 dim is %d\nValue of X2 dim is %d\nValue of Y2 dim is %d\n", v1.x, v1.y, v2.x, v2.y);
    sum = sumVector(v1, v2);
    printf("Sum of X dimension is %d\n Sum of Y dimension is %d", sum.x, sum.y);
    return 0;
}