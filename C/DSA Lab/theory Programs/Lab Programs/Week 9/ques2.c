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
    printf("\nEnter the element to be searched : ");
    int s, f = 0;
    scanf("%d", &s);
    int u = n - 1, l = 0;
    while (u >= 1)
    {
        int m = l + (u - 1) / 2;

        if (arr[m] == s)
        {
            printf("Element %d was found at array index : %d \n", s, m);
            f = 1;
            break;
        }
        else if (arr[m] > s)
        {
            u = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    if (f == 0)
    {
        printf("Element %d was not found in given array \n", s);
    }
    return 0;
}