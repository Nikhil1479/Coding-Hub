#include <stdio.h>

int main()
{
    int num, i;
    printf("Enter the Number\n");
    scanf("%d", &num);

    for (i = 10; i; i--)
        printf("%d X %d = %d\n", num, i, num * i);
    return 0;
}