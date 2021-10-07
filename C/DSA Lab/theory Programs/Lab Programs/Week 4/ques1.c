#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *next;
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
            printf("Data = %d\n", temp->data);
            temp = temp->next;
        }
    }
}

void insert_At_Start()
{
    int data;
    struct node *temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    temp->data = data;

    temp->next = start;
    start = temp;
}

void check()
{
    if (start == NULL)
        printf("List is empty\n");
    else
    {
        printf("List is not Empty\n");
    }
}

void delete_at_First()
{
    struct node *temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else
    {
        temp = start;
        start = start->next;
        free(temp);
    }
}
int count()
{
    int count = 0;
    struct node *current = start;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
int countNodes()
{
    int count = 0;
    struct node *current = start;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }
    return count;
}
void search()
{
    struct node *ptr;
    int item, i = 0, flag;
    ptr = start;
    if (ptr == NULL)
    {
        printf("\nEmpty List\n");
    }
    else
    {
        printf("\nEnter item which you want to search?\n");
        scanf("%d", &item);
        while (ptr != NULL)
        {
            if (ptr->data == item)
            {
                printf("item found at location %d ", i + 1);
                flag = 0;
            }
            else
            {
                flag = 1;
            }
            i++;
            ptr = ptr->next;
        }
        if (flag == 1)
        {
            printf("Item not found\n");
        }
    }
}
int main()
{
    int choice;
    while (1)
    {

        printf("1  Display list\n");
        printf("2  Insert at Starting\n");
        printf("3  Deletion at starting\n");
        printf("4  To check weather a linked list is empty or not\n");
        printf("5  Search a Linked List\n");
        printf("6  To count the number of nodes\n");
        printf("7  To exit\n");
        printf("Enter Choice :\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            traverse();
            break;
        case 2:
            insert_At_Start();
            break;
        case 3:
            delete_at_First();
            break;
        case 4:
            check();
            break;
        case 5:
            search();
            break;
        case 6:
            count();
            break;
        case 7:
            exit(1);
            break;
        default:
            printf("Invalid Choice\n");
        }
    }
    return 0;
}