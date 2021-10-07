#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 34;
    int *j = &i;
    printf("Value of i is %d\n", i);
    printf("Value of j is %d\n", j);
    printf("Address of i is %u\n", j);
    printf("Address of j is %u\n", &j);

    return 0;
}