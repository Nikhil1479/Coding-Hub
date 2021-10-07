#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int code;
    char name[20];
    int salary;
};

int main()
{
    struct employee e1;
    struct employee *ptr;

    ptr = &e1;

    ptr->code = 500; //(*ptr.code = 500)
    printf("%d", e1.code);

    return 0;
}