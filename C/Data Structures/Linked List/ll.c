#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;
    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int count(struct Node *p)
{
    int count = 0;
    while (p)
    {
        p = p->next;
        count += 1;
    }
    return count;
}

int max(struct Node *p)
{
    int max = p->data;
    while (p)
    {
        if (p->data > max)
        {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

int search(struct Node *p, int n = 0)
{
    while (p)
    {
        if (p->data == n)
        {
            n = 1;
        }
        p = p->next;
    }
}
int main()
{

    int A[] = {3, 5, 7, 10, 25, 8, 32, 2};

    create(A, 8);
    display(first);
    printf("\nTotal number of Nodes in Linked List: %d", count(first));
    printf("\nBiggest Value in Linked List: %d", max(first));

    int key;
    printf("\nEnter the key you want to search: ");
    scanf("%d", &key);
    search(first, key);
    return 0;
}