#include <stdio.h>

int main(void)
{
    printf("Enter the number of elements you want to enter : ");
    int n;
    scanf("%d", &n);
    printf("Enter the elements of the array : \n");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The entered elements of the array are : \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int c = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
            }
        }
        if (c >= n / 2)
        {
            printf("\nThe number which appears more than or equal to n/2 : %d times in the given array is : %d ", n / 2, arr[i]);
            break;
        }
    }
    return 0;
}