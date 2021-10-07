#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Employee
{
    int code;
    int salary;
    char name[10];
};

int main()
{
    struct Employee e1, e2, e3;

    printf("Enter the Code of Employee 1: \n");
    scanf("%d", &e1.code);
    printf("Enter the Name of Employee 1: \n");
    scanf("%s", e1.name);
    printf("Enter the Salary of Employee 1: \n");
    scanf("%d", &e1.salary);

    printf("Enter the Code of Employee 2: \n");
    scanf("%d", &e2.code);
    printf("Enter the Name of Employee 2: \n");
    scanf("%s", e1.name);
    printf("Enter the Salary of Employee 2: \n");
    scanf("%d", &e2.salary);

    printf("Enter the Code of Employee 3: \n");
    scanf("%d", &e3.code);
    printf("Enter the Name of Employee 3: \n");
    scanf("%s", e3.name);
    printf("Enter the Salary of Employee 3: \n");
    scanf("%d", &e3.salary);

    return 0;
}