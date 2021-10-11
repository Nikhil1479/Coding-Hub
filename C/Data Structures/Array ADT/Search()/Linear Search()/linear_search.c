#include <stdio.h>
#include <stdlib.h>

struct array
{
    int A[20];
    int size;
    int length;
};

void input(struct array *arr)
{
    printf("\nEnter the %d elements in Array: ", arr->length);
    for (int i = 0; i < arr->length; i++)
    {
        scanf("%d", &arr->A[i]);
    }
}

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int linear_search(struct array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[i - 1]); //Improving Linear Search [Transposition Method]
                                              //!swap(&arr->A[i], &arr->A[0]); [Move to Front/Head Method]
            return i;                         //just for user understanding
        }
    }
    return -1;
}
int main()
{
    struct array arr;

    int choice = 0;
    int key;

    arr.size = 20;
    printf("\nEnter the length og Array: ");
    scanf("%d", &arr.length);

    input(&arr);

    printf("\nDo you want to Search ?[1/0]");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("\nEnter the Key:");
        scanf("%d", &key);

        printf("%d key is at %d index", key, linear_search(&arr, key));
    }
}