#include <stdio.h>
#include <stdlib.h>

struct employee
{
    int code;      //--> 4bytes
    char name[10]; //--> 10 bytes
    int salary;    //-->4bytes
};

int main()
{
    struct employee facebook[10];
    // printf("Size => %d\n", sizeof(facebook));
    // printf("Size of Struct => %d", sizeof(struct employee));

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the %d name: \n", i + 1);
        scanf("%s", facebook[i].name);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Name %d : %s\n", i + 1, facebook[i].name);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Salary of name %s ", facebook[i].name);
        scanf("%d", &facebook[i].salary);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Salary of %s is %d\n", facebook[i].name, facebook[i].salary);
    }
    return 0;
}