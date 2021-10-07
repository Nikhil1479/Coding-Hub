#include <stdio.h>
#include <stdlib.h>

//Sum is a function which takes a and b as input and returns an integer as output
int sum(int a, int b);

int main()
{
    int c;
    c = sum(4, 6);
    printf("Sum is %d", c);
    return 0;
}

int sum(int a, int b)
{
    int result;
    result = a + b;
    return result;
}