#include <stdio.h>
#include <stdlib.h>

struct array // Structure Definition
{
    int *A;
    int size;
    int length;
};

void input(struct array arr) // Input Function Prototype
{
    printf("Enter %d Elements in Array: \n", arr.length);
    for (int i = 0; i < arr.length; i++) //Taking Input from Array
    {
        scanf("%d", &arr.A[i]);
    }
}

void insert(struct array arr, int index, int value) // Insert Function Prototype
{
    if (index >= 0 && index <= arr.length)
    {
        int i;

        /*Loop starting from the last element of Array and 
        decrementing the value "i" till it reaches value of index   */

        for (i = arr.length; i > index; i--)
        {
            arr.A[i] = arr.A[i - 1]; // Shifting & Copying Array Value
        }

        arr.length++;         //  Increasing Length
        arr.A[index] = value; //  Inserting Value

        printf("Printing %d Elements of Array: ", arr.length);

        for (i = 0; i < arr.length; i++) //Printing Array
        {
            printf("%d ", arr.A[i]);
        }
    }
    else
    {
        printf("Index Error!!");
    }
}

void display(struct array arr) // Display Function Prototype
{
    int i;
    printf("Printing %d Elements of Array: ", arr.length);
    for (i = 0; i < arr.length; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

int main()
{
    struct array arr;

    printf("Enter Size of Array: ");
    scanf("%d", &arr.size);

    printf("Set the Length of Array: ");
    scanf("%d", &arr.length);

    if (arr.length > arr.size)
    {
        printf("Memory Allocation Error!!");
        return 0;
    }

    arr.A = (int *)malloc(arr.size * sizeof(int)); //Dynamically Allocating Array in Heap

    input(arr);

    int choice;
    printf("Do You Want to Insert an Element ? [1/0]");
    scanf("%d", &choice);

    if (choice == 1)
    {
        int index, value;
        printf("Enter the Index: ");
        scanf("%d", &index);
        printf("Enter the Value: ");
        scanf("%d", &value);

        insert(arr, index, value); //Insert Function Call
    }

    else
    {
        display(arr);
    }

    return 0;
}