#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};
void display(struct Array arr)
{
    printf("Printing Elements...\n");
    for (int i = 0; i < arr.length; i++)
    {
        printf("%d\n", arr.A[i]);
    }
}

void input(struct Array arr)
{
    printf("Enter the Elements of Array:\n");

    for (int i = 0; i < arr.length; i++)
    {
        scanf("%d", &arr.A[i]);
    }
}
int main()
{
    struct Array arr;
    int i;
    printf("Enter The Size of Array:\n");
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));

    arr.length = 0;

    printf("Set the Length of Array:\n");
    scanf("%d", &arr.length);

    input(arr);
    display(arr);

    return 0;
}