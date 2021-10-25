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
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == s)
        {
            printf("Element %d was found at array index : %d \n", s, i);
            f = 1;
        }
    }
    if (f == 0)
    {
        printf("Element %d was not found in given array \n", s);
    }
    return 0;
}
