#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[5];
    int size;
    int elements;
};

void input(struct Array &input_arr)
{
    printf("How many Elements do you want to Input: ");
    scanf("%d", &input_arr.elements);
    for (int i = 0; i < input_arr.elements; i++)
    {
        scanf("%d", &input_arr.A[i]);
    }
}

void display(struct Array display_arr)
{
    printf("Printing Elements of Array...\n");
    for (int i = 0; i < display_arr.elements; i++)
    {
        printf("%d\n", display_arr.A[i]);
    }
}

int main()
{
    struct Array arr;

    // printf("Enter the Size of Arrray: ");
    // scanf("%d", &arr.size);

    // arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.elements = 0;
    input(arr);
    display(arr);

    return 0;
}