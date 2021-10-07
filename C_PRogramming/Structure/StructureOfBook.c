#include <stdio.h>
int main()
{
    struct Book
    {
        char name[20];
        float price;
        int pages;
    };
    struct Book b1, b2;

    printf("\nEnter Names, Prices, and Number of Pages of 2 books\n");

    scanf("%s%f%d", b1.name, &b1.price, &b1.pages);

    scanf("%s %f %d", b2.name, &b2.price, &b2.pages);

    printf("\nUser's Entered Value");

    printf("\n%s %f %d", b1.name, b1.price, b1.pages);

    printf("\n%s %f %d", b2.name, b2.price, b2.pages);

    return 0;
}