#include <stdio.h>
int main()
{
    int n_student = 3;
    int n_subjects = 5;

    int marks[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter the marks of student %d in subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    printf("--------------------------------");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("\nThe marks of student %d in subject %d is %d\n", i + 1, j + 1, marks[i][j]);
        }
    }

    return 0;
}