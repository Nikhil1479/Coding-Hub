#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct employee
{
    int code;
    int salary;
    char name[10];
};

int main()
{
    struct employee facebook[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Name of Employee %d\n", i + 1);
        scanf("%s", facebook[i].name);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Name of Employee %d is %s\n", i + 1, facebook[i].name);
    }
    return 0;
}