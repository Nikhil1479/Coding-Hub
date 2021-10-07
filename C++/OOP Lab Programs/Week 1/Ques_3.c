#include <stdio.h>
struct EMP
{
    int eno;
    char ename[50];
    int ebasic_sal;
} s;

int main()
{
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", s.ename);

    printf("Enter employee number: ");
    scanf("%d", &s.eno);
    printf("Enter basic salary: ");
    scanf("%d", &s.ebasic_sal);
    float gross_sal = s.ebasic_sal + (0.1 * s.ebasic_sal) + (0.15 * s.ebasic_sal) + (0.08 * s.ebasic_sal);
    printf("The gross salary is : %f", gross_sal);
}