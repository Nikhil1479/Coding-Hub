#include <stdio.h>
#include <string.h>
int main()
{
    struct employee
    {
        char name[20];
        int age;
        float salary;
    };
    struct employee emp1, emp2, emp3;
    printf("Enter the Name, Age, Salary of Employee :");
    scanf("%s %d %f", &emp1.name, &emp1.age, &emp1.salary);
    emp2.age = emp1.age;
    emp2.salary = emp1.salary;
    strcpy(emp2.name, emp1.name);
    emp3 = emp1;
    printf("The Copied String : \nemp2=%s, %d, %f\nemp3=%s, %d,%f", emp2.name, emp2.age, emp2.salary, emp3.name, emp3.age, emp3.salary);
    return 0;
}