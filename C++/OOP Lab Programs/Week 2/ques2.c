#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 5, *arr;
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter the numbers : \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The entered numbers are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \t", arr[i]);
    }
    return 0;
}