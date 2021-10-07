#include <stdio.h>

int main()
{
    int age;
    printf("Enter Your Age\n");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("You cannot Drive");
    }
    else
    {
        printf("You can drive");
    }
    return 0;
}