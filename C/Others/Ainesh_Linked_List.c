#include <stdio.h>
#include <stdlib.h>
typedef struct Node node;
node *make_node(int);
void display(node *);
void insert(node **, int, int);
void delete (node **, int);
void createLL(node **);
int nodeCount(node *);
void sort(node **);
struct Node
{
    int data;
    node *next;
};
int main()
{
    node *head = NULL;
    node **head_ref;
    head_ref = &head;
    int ch1;
    printf("1.Enter elements in bulk.(Size required)\n2.Enter singular elements.\nEnter choice : ");
    scanf("%d", &ch1);
    switch (ch1)
    {
    case 1:
        createLL(&head);
        break;
    case 2:
        printf("Enter first element :");
        scanf("%d", &head->data);
        break;

    default:
        printf("Invalid choice!Try again.");
        break;
    }

    int ch, flag = 1;

    while (flag)
    {
        printf("1.Add element.\n2.Remove element.\n3.Display elements.\n4.Sort Elements.\n5.Exit\nEnter Choice : ");
        scanf("%d", &ch);
        int idx, element_value;
        switch (ch)
        {
        case 1:
            display(head);
            printf("Enter index for insertion(0 for inserting at front) : ");
            scanf("%d", &idx);
            printf("Enter value for insertion : ");
            scanf("%d", &element_value);
            insert(head_ref, idx, element_value);
            printf("\e[1;1H\e[2J");
            break;
        case 2:
            display(head);
            printf("Enter index for removal : ");
            scanf("%d", &idx);
            delete (head_ref, idx);
            // printf("\e[1;1H\e[2J");
            break;
        case 3:
            display(head);
            break;
        case 4:
            sort(head_ref);
            break;
        case 5:
            flag = 0;
            break;

        default:
            printf("Invalid Choice!!Try Again.");
            break;
        }
    }
}
node *make_node(int value)
{
    node *temp;
    temp = (node *)malloc(sizeof(node));
    temp->data = value;
    return temp;
}
void insert(node **p, int idx, int value)
{
    node *temp;
    if (idx < 0 || idx > nodeCount(*p))
        return;
    if (idx == 0)
    {
        temp = make_node(value);
        temp->next = *p;
        *p = temp;
    }
    else if (idx > 0)
    {
        node *insert = *p;
        for (int i = 0; i < idx - 1 && p; i++)
            insert = insert->next;

        if (insert)
        {
            temp = make_node(value);
            temp->next = insert->next;
            insert->next = temp;
        }
    }
}
void delete (node **p, int idx)
{
    node *t = *p;
    node *q = NULL;
    if (idx == 1)
    {
        t = *p;
        (*p) = (*p)->next;
        return;
    }
    int i = 1;
    while (t)
    {
        if (idx == i)
        {
            q->next = t->next;
            t->next = NULL;
            free(t);
            return;
        }
        q = t;
        t = t->next;
        i++;
    }
}
void createLL(node **p)
{
    int *A, n;
    node *temp, *last;
    printf("Enter number of elements : ");
    scanf("%d", &n);
    A = (int *)malloc(sizeof(int) * n);
    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", A + i);
    }
    *p = (node *)malloc(sizeof(node));
    (*p)->data = A[0];
    (*p)->next = NULL;
    last = *p;
    for (int i = 1; i < n; i++)
    {
        temp = make_node(A[i]);
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
void display(node *curr)
{
    printf("Current elements in list : \n");
    if (!curr)
        printf("EMPTY.\n");
    int i = 1;
    while (curr != NULL)
    {
        printf("Element[%d] - %d ", i, curr->data);
        curr = curr->next;
        i++;
        printf("\n");
    }
}
int nodeCount(node *p)
{
    int count = 0;
    while (p)
    {
        count++;
        p = p->next;
    }
    return count;
}
void sort(node **head_ref)
{
    node *p, *q;
    p = *head_ref;
    while (p)
    {
        q = *head_ref;
        while (q)
        {
            if (p == q)
            {
                q = q->next;
                continue;
            }
            if (p->data < q->data)
            {
                int temp;
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
            q = q->next;
        }
        p = p->next;
    }
}