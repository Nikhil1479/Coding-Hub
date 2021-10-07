#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    int a;
    struct node *head = NULL, *t, *p;
    t = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &t->data);
    t->next = NULL;
    head = t;
    do
    {
        t = (struct node *)malloc(sizeof(struct node));
        scanf("%d", &t->data);
        t->next = NULL;
        p = head;
        while (p->next)
            p = p->next;
        p->next = t;
        printf("do yo want to add more nodepress 1 for yes ,0 for no.");
        scanf("%d", &a);
    } while (a);
    display(head);
}
int display(struct node *p)
{
    while (p)
    {
        printf("%d--->", p->data);
        p = p->next;
    }
    printf("NULL\n");
    return 0;
}