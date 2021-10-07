#include <stdio.h>
int main()
{
    int arr[50], b[50], n, pos, temp;
    printf("Enter the Number of Elements: ");
    scanf("%d", &n);
    printf("\nEnter the Elements of Array: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        b[i] = arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (arr[i] <= arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    // printf("The Array Elements are: \n");
    // for (int i = 1; i <= n; i++){
    //     printf("%d", b[i]);
    // }
    printf("\nSecond Smallest Element is: %d", arr[2]);
    printf("\nSecond Largest Element is: %d", arr[n - 1]);
    return 0;
}