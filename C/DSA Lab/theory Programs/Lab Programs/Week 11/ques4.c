#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
} ll;

ll *insert(int num, ll *head)
{
    ll *newNode = (ll *)malloc(sizeof(ll));
    newNode->data = num;
    newNode->next = head;
    head = newNode;
    printf("Inserted Element : %d\n", num);
    return head;
}

void printLinkedList(ll *head)
{
    ll *temp = head;
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
        if (temp != NULL)
            printf("-->");
    }
}

int compare(ll *head1, ll *head2)
{
    int f = 0;
    ll *temp1 = head1;
    ll *temp2 = head2;
    while (temp1 != NULL || temp2 != NULL)
    {
        if (temp1->data == temp2->data)
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
            f = 1;
        }
        else
        {
            return 0;
        }
        if ((temp1 != NULL && temp2 != NULL) && f == 1)
        {
            return f;
        }
    }
}

int main()
{
    ll *head1, *head2;
    head1 = NULL;
    head2 = NULL;
    int n;
    char c;
    printf("------------Linked List 1------------ \n");
    printf("Insertion : \n");
    do
    {
        printf("\nPlease enter the element you want to insert : ");
        scanf("%d", &n);
        head1 = insert(n, head1);
        printf("\nWant To enter More Elements?(y/n)");
        c = getch();
    } while (c == 'y' || c == 'Y');
    printf("\nDisplay : \n");
    printLinkedList(head1);
    printf("\n------------------------------------- \n");
    printf("------------Linked List 2------------ \n");
    printf("Insertion : \n");
    do
    {
        printf("\nPlease enter the element you want to insert : ");
        scanf("%d", &n);
        head2 = insert(n, head2);
        printf("\nWant To enter More Elements?(y/n)");
        c = getch();
    } while (c == 'y' || c == 'Y');
    printf("\nDisplay : \n");
    printLinkedList(head2);
    printf("\n------------------------------------- \n");
    printf("Comparing..............");
    if (compare(head1, head2) == 1)
    {
        printf("The linked lists are equal \n");
    }
    else
    {
        printf("The linked lists are not equal \n");
    }
    return 0;
}