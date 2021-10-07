#include <stdio.h>

void printAdd(int a)
{
    printf("Value of i (passed through function) is %u\n", &a);
}

int main()
{

    int i = 5;
    printf("Value of i is %d\n", i);
    printAdd(i);
    printf("Address of i (under main function) is %u", &i);

    return 0;
}