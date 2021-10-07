#include <stdio.h>
int main()
{
    int marks[4]; //creating array

    printf("\nEnter the marks of Student 1: ");
    scanf("%d", &marks[0]);

    printf("\nEnter the marks of Student 2: ");
    scanf("%d", &marks[1]);

    printf("\nEnter the marks of Student 3: ");
    scanf("%d", &marks[2]);

    printf("\nEnter the marks of Student 4: ");
    scanf("%d", &marks[3]);

    printf("You have entered %d %d %d and %d marks", marks[0], marks[1], marks[2], marks[3]);

    return 0;
}