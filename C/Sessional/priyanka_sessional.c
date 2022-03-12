#include <stdio.h>
struct student
{
    int roll_no, marks;
    char name[25];
} stud[100], t;

void main()
{
    int i, j, n, rank = 1;
    printf("Input total Students: \n");
    scanf("%d", &n);
    printf("Input Student Data(Roll No., Name, Marks):\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d %s %d", &stud[i].roll_no, stud[i].name, &stud[i].marks);
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (stud[j].marks < stud[j + 1].marks)
            {
                t = stud[j];
                stud[j] = stud[j + 1];
                stud[j + 1] = t;
            }
        }
    }

    printf("\nStudent Data from Highest to Lowest\n");
    printf("\nROLL_NO\t\t\tNAME\t\t\tMARKS\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t\t%s\t\t\t%d\n", stud[i].roll_no, stud[i].name, rank);
        rank++;
    }
}