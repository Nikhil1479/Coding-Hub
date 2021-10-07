#include <stdio.h>
int main()
{
    int marks[4];
    int *ptr = &marks[0]; //it can be written as ptr= marks;
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the marks of Student %d: \n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    for (int i = 0; i < 4; i++)
    {
        printf("Marks of Student %d is %d \n", i + 1, marks[i]);
    }
    return 0;
}