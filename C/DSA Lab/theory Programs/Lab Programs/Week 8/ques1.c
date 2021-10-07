#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
} * head;

void initialize()
{
    head = NULL;
}

void insert(int num)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = num;
    newNode->next = head;
    head = newNode;
    printf("Inserted Element : %d\n", num);
}

void delete (int num)
{
    struct node *h = head;
    struct node *temp;
    while (h->next != NULL)
    {
        if (h->next->data == num)
        {
            temp = h->next;
            h->next = h->next->next;
            free(temp);
            break;
        }
        else
        {
            h = h->next;
        }
    }
}
void findloop(struct node *head)
{
    struct node *slow, *fast;
    slow = fast = head;
    while (slow && fast && fast->next)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            printf("Linked List contains a loop\n");
            return;
        }
    }
    printf("No Loop in Linked List\n");
}

void printLinkedList()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
        if (temp != NULL)
            printf("-->");
    }
}

void looper(int n)
{
    int f = 0;
    struct node *temp = head;
    struct node *loop = head;
    while (temp != NULL)
    {
        if (f != n)
        {
            f++;
            loop = loop->next;
        }

        if (temp->next == NULL)
        {
            temp->next = loop;
            break;
        }
        else
        {
            temp = temp->next;
        }
    }
}

int main()
{
    initialize();
    while (1)
    {
        int choice;
        printf("1. Insert element\n");
        printf("2. Delete element \n");
        printf("3. Display elements\n");
        printf("4. Create Loop\n");
        printf("5. Check for loop\n");
        printf("6. Exit\n");
        printf("Enter your choice : \n");
        scanf("%d", &choice);
        int n;
        switch (choice)
        {
        case 1:
            printf("Please enter the element you want to insert : ");
            scanf("%d", &n);
            insert(n);
            break;
        case 2:
            printf("Please enter the element you want to delete : ");
            scanf("%d", &n);
            delete (n);
            break;
        case 3:
            printf("The entered linked list is :\n");
            printLinkedList();
            printf("\n");
            break;
        case 4:
            printf("Please enter the position you want to loop at : ");
            int n;
            scanf("%d", &n);
            looper(n);
            break;
        case 5:
            findloop(head);
            break;
        case 6:
            printf("Exiting...");
            exit(0);
            break;
        default:
            break;
        }
    }
    return 0;
}