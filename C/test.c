#include <stdio.h>
#include <unistd.h>
int main()
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sum1 = 0, sum2 = 0, sum = 0;
    int id;
    id = fork();
    if (id == 0)
    {
        for (int i = 0; i < 10; i++)
        {
            sum1 += a[i];
            sum += sum1;
        }
        printf("Parent Sum: %d\n", sum1);
    }
    else
    {
        for (int i = 1; i < 10; i++)
        {
            sum2 += a[i];

            sum += sum2;
        }
        printf("Child Sum: %d\n", sum2);
    }
    if (id == 0)
    {
        printf("Final Sum is: %d\n", sum);
    }
    return 0;
}