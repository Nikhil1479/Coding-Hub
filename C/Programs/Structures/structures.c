#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
    int code;
    int salary;
    char name[10];

} e1;

int main()
{
    e1.code = 100;
    e1.salary = 500000;
    strcpy(e1.name, "Nikhil");

    printf("%d\n", e1.code);
    printf("%d\n", e1.salary);
    printf("%s\n", e1.name);

    return 0;
}