#include <stdio.h>
int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("-----------------------------------|\n");
    printf("Size of integer is %d\n", sizeof(int));
    printf("-----------------------------------|\n");
    printf("Address = %d, Value = %d\n", p, *p);
    printf("-----------------------------------|\n");

    printf("Address = %d, Value = %d\n", p + 1, *(p + 1));
    printf("-----------------------------------|\n");

    char *p0;
    p0 = (char *)p;

    printf("Address = %d, Value = %d\n", p0, *p0);
    printf("-----------------------------------|\n");
    printf("Address = %d, Value = %d\n", p0 + 1, *(p0 + 1));
    printf("-----------------------------------|\n");
    return 0;
}