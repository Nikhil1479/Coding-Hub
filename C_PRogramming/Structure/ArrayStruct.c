#include <stdio.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        int pages;
    };
    struct book *ptr, b[5];
    int i, n;
    ptr = b;
    printf("Enter Quantity of Books: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\nEnter Next Book Name, Price and Pages");
        scanf("%s %f %d", (ptr + i)->name, &(ptr + i)->price, &(ptr + i)->pages);
    }
    for (i = 0; i < n; i++)
        printf("\n%s %f %d", (ptr + i)->name, (ptr + i)->pages);
    return 0;
}