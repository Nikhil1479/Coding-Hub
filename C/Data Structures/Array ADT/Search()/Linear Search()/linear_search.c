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

int linear_search(struct array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            return i + 1; //just for user understanding
        }
    }
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

        linear_search(&arr, key);
    }
}