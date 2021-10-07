#include <stdio.h>

int change_value(int a)
{
    int change = a * 10;
    return change;
}

int main()
{
    int a = 5;
    int change;
    change = change_value(a);

    printf("Changed Value is %d", a); //it will not work as it is passing the value

    return 0;
}