#include <stdio.h>
#include <stdlib.h>

typedef struct employee
{
    int code;
    char salary[20];
} emp;
int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;
    // (*ptr).code = 600; Alternative way of using pointer in structure
    ptr->code = 20051523;
    printf("Code of e1 is %d", e1.code);

    return 0;
}
