#include <stdio.h>
struct Emp
{
    int empno;
    char ename[20];
    int salary;
} a;
void input()
{
    printf("Enter Employee Number\n");
    scanf("%d", &a.empno);

    printf("Enter the Emolyee Name\n");
    scanf("%s", &a.ename);

    printf("Enter the Employee Salary\n");
    scanf("%f", &a.salary);
}
void display()
{
    printf("The employee number is %d\n", a.empno);
    printf("Employee name: %s\n", a.ename);
    printf("The employee salary is:%f", a.salary);
}

int main()
{
    input();
    display();
    return 0;
}
