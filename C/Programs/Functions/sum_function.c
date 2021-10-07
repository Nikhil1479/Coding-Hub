#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b); // function prototype

int main()
{
    int n1, n2, add_num;
    printf("Enter two numbers\n");
    scanf("%d %d", &n1, &n2);
    add_num = sum(n1, n2); // function call
    printf("Sum of %d and %d is %d", n1, n2, add_num);
    return 0;
}

int sum(int a, int b)
{ // function declartion
    int result;
    result = a + b;
    return result;
}