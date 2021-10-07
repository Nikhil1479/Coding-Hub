#include <stdio.h>

void add_avg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (*sum) / 2;
}

int main()
{
    int a = 50, b = 50, sum;
    float avg;

    add_avg(a, b, &sum, &avg);

    printf("Sum is %d\nAverage is %.2f\n", sum, avg);

    return 0;
}