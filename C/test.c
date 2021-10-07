#include <stdio.h>
#include <stdlib.h>

void func(int &x, int &y, int &z)
{
    y = y + 4;
    z = x + y + z;
}

int main()
{
    int main()
    {
        int x = 10;
        int y = 3;
        func(y, x, x);
        printf("%d %d", x, y);
    }

    return 0;
}