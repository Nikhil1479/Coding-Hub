#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *link;
};
struct node *start = NULL;

void traverse()
{
    struct node *temp;
    if (start == NULL)
        printf("\nList is empty\n");

    else
    {
        temp = start;
        while (temp != NULL)
        {
            printf("%d-> 3",
                   temp->info);
            temp = temp->link;
        }
    }
}

void insertAtFront(int data)
{
    struct node *temp;
    temp = malloc(sizeof(struct node));
    temp->info = data;
    temp->link = start;
    start = temp;
}

void deletePosition(int pos)
{
    struct node *temp, *position;
    int i = 1;

    if (start == NULL)
        printf("\nList is empty\n");

    else
    {
        position = malloc(sizeof(struct node));
        temp = start;
        while (i < pos - 1)
        {
            temp = temp->link;
            i++;
        }
        position = temp->link;
        temp->link = position->link;
        free(position);
    }
}

int search(int x)
{
    struct node *current = start; // Initialize current
    int pos = 0;
    while (current != NULL)
    {
        pos++;
        if (current->info == x)
            return pos;
        current = current->link;
    }
    return 0;
}
int main()
{
    int choice;
    int n;
    while (1)
    {
        printf("\n\t1 To see list\n");
        printf("\t2 For insertion at starting\n");
        printf("\t3 To search for a given element in the list\n");
        printf("\t4 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            traverse();
            break;
        case 2:
            printf("Enter the nodes :");
            scanf("%d", &n);
            insertAtFront(n);
            break;
        case 3:
            printf("Enter the key to be searched: ");
            int s;
            scanf("%d", &s);
            int k = search(s);
            if (k != 0)
            {
                printf("Element found in linked list at %d", k);
                deletePosition(k);
                insertAtFront(s);
                printf("Linked list after reaarangement\n");
                traverse();
            }
            else
            {
                printf("Element not found in linked list");
            }
            break;
        case 4:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}
