#include <stdio.h>
int main()
{
    struct book
    {
        char name[20];
        float price;
        int pages;
    };
    struct book b1={"Alchemist",250,360};
    struct book*ptr;
    ptr=&b1;
    printf("\n%s",ptr->name);
    printf("\n%f",ptr->price);
    printf("\n%d",ptr->pages);
    return 0;
}