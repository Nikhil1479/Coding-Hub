#include <stdio.h>
int main()
{

    int i = 3;
    int *j = &i;
    printf("Address if i is %u\n", j);
    printf("Value of i is %d\n", *j);

    return 0;
}