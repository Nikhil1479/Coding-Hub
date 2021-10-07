#include <stdio.h>
void change_value(int a, int *change)
{
    *change = a * 10;
}

int main()
{
    int i = 5, change;
    change_value(i, &change);
    printf("Changed value of i is: %d", change);

    return 0;
}