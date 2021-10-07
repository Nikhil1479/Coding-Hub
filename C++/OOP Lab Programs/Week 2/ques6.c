#include <stdio.h>

struct student
{
    char name[50];
    int roll;
    float marks1;
    float marks2;
    float marks3;
} s;
void sum(struct student *ptr)
{
    printf("The sum of marks is: %0.1f \n", ((*ptr).marks1 + (*ptr).marks2 + (*ptr).marks3));
}
void avg(struct student *ptr)
{
    printf("The avg of marks is: %0.1f \n", ((*ptr).marks1 + (*ptr).marks2 + (*ptr).marks3) / 3);
}
int main()
{
    printf("Enter information:\n");
    printf("Enter name: ");
    fgets(s.name, sizeof(s.name), stdin);

    printf("Enter roll number: ");
    scanf("%d", &s.roll);
    printf("Enter marks: ");
    scanf("%f", &s.marks1);
    scanf("%f", &s.marks2);
    scanf("%f", &s.marks3);
    struct student *ptr = &s;
    printf("Displaying Information:\n");
    printf("Name: ");
    printf("%s", (*ptr).name);
    printf("Roll number: %d\n", (*ptr).roll);
    printf("Marks: %.1f\n%.1f\n%.1f\n", (*ptr).marks1, (*ptr).marks2, (*ptr).marks3);
    sum(ptr);
    avg(ptr);
    return 0;
}