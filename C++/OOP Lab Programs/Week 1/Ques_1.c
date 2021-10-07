#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks1;
    float marks2;
    float marks3;
} s;

int sum(int a, int b, int c)
{
    float sum = a + b + c;
    return sum;
}
float avg(float a, float b, float c)
{
    float avg = (a + b + c) / 3;
    return avg;
}
float cgpa(float a, float b, float c)
{
    float cgpa = (a + b + c) / 30;
    return cgpa;
}

int main()
{
    printf("Enter information:\n");
    printf("Enter name: ");
    scanf("%s", s.name);

    printf("\nEnter roll number: ");
    scanf("%d", &s.roll);
    
    printf("Enter marks: ");
    scanf("%f", &s.marks1);
    scanf("%f", &s.marks2);
    scanf("%f", &s.marks3);

    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Sum of Marks: %d\n", sum(s.marks1, s.marks2, s.marks3));
    printf("Average of Marks: %.1f\n", avg(s.marks1, s.marks2, s.marks3));
    printf("CGPA obtained is: %.1f\n", cgpa(s.marks1, s.marks2, s.marks3));
    return 0;
}