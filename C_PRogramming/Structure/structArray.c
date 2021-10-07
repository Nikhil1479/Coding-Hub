#include <stdio.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        int pages;
    };
    struct book b[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        printf("\nEnter The Name, Price, and Pages of Book %d=", i + 1);
        scanf("%s %f %d", b[i].name, &b[i].price, &b[i].pages);
    }
    printf("Array Looks Like :\n");
    for (i = 0; i < 10; i++)
    {
        printf("Book %d=%s %f %d\n", i + 1, b[i].name, b[i].price, b[i].pages);
    }
    return 0;
}
