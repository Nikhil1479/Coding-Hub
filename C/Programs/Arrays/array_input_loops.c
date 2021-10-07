#include <stdio.h>
int main()
{
    int marks[10], i, n = 5;
    printf("Enter total number of students: ");
    // scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter the value of marks %d: ", i + 1);
        scanf("%d", &marks[i]);
    }
    printf("\n----------------------------\n");
    for (i = 0; i < n; i++)
    {
        printf("The value of Student %d is %d\n", i + 1, marks[i]);
        }
    return 0;
}