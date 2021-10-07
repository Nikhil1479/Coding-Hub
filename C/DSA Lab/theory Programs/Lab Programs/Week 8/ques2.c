#include <stdio.h>
#include <stdlib.h>

typedef struct node_list *node;
struct node_list
{
    int info;
    node next;
};

node display(node);
node check_empty(node);
node insert_beg(node, int);
node insert_pos(node, int, int);
node delete_pos(node, int);
node delete_key(node, int);
node count_nodes(node);
node search_key(node, int);
node *reverseKNodes(node, int);

node head = NULL;
void main()
{
    int ch, k;
    int item, pos;
    do
    {
        printf("\nEnter your choice :\n1. Display the list\n2.Check for empty list\n3.Insert at beginning\n4.Insert at any pos\n5.Delete node from a certain position\n6.Delete a given item\n7.Count total number of nodes\n8.Seach for an element in link list\n9.Reverse k nodes of link list\n10.EXIT : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = display(head);
            break;

        case 2:
            head = check_empty(head);
            break;

        case 3:
            printf("\nEnter the element which it is to be inserted : ");
            scanf("%d", &item);
            head = insert_beg(head, item);
            break;

        case 4:
            printf("\nFirst enter the element and then the position at which it is to be inserted : ");
            scanf("%d%d", &item, &pos);
            head = insert_pos(head, pos, item);
            break;

        case 5:
            printf("\nEnter position from which node is to be deleted : ");
            scanf("%d", &pos);
            head = delete_pos(head, pos);
            break;

        case 6:
            printf("\nEnter item which is to be deleted : ");
            scanf("%d", &item);
            head = delete_key(head, item);
            break;

        case 7:
            head = count_nodes(head);
            break;

        case 8:
            printf("\nEnter element to be searched : ");
            scanf("%d", &item);
            head = search_key(head, item);
            break;
        case 9:
            printf("\nEnter the value of k to reverse k nodes : ");
            scanf("%d", &k);
            head = reverseKNodes(head, k);
            break;

        default:
            printf("\nInvalid choice");
        }
    } while (ch != 10);
}

node display(node head)
{
    if (head == NULL)
    {
        printf("\nEmpty List\n");
        return head;
    }
    node ptr = head;
    printf("LIST : ");
    while (ptr != NULL)
    {
        printf("%d ", ptr->info);
        ptr = ptr->next;
    }
    return head;
}

node check_empty(node head)
{
    if (head == NULL)
        printf("\nList is Empty\n");
    return head;
}

node insert_beg(node head, int item)
{
    struct node_list *newnode = (struct node_list *)malloc(sizeof(struct node_list));
    if (newnode == NULL)
    {
        printf("\nOVERFLOW");
        return head;
    }
    node ptr = head;
    newnode->info = item;
    newnode->next = head;
    head = newnode;
    return head;
}

node insert_pos(node head, int pos, int item)
{
    struct node_list *newnode = (struct node_list *)malloc(sizeof(struct node_list));
    if (newnode == NULL)
    {
        printf("\nOVERFLOW");
    }
    newnode->info = item;
    newnode->next = NULL;
    node ptr = head;
    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
        return head;
    }
    else
    {
        node temp;
        for (int i = 1; i <= pos - 1; i++)
        {
            temp = ptr;
            ptr = ptr->next;
        }
        newnode->next = ptr;
        temp->next = newnode;
    }
    return head;
}

node delete_pos(node head, int pos)
{
    if (head == NULL)
    {
        printf("\nUNDERFLOW OCCURED");
        return head;
    }
    if (pos == 1)
    {
        head = head->next;
        return head;
    }
    node temp, ptr = head;
    for (int i = 1; i < pos; i++)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    free(ptr);
    return head;
}

node delete_key(node head, int item)
{
    if (head == NULL)
    {
        printf("\nUNDERFLOW OCCURED");
        return head;
    }
    node temp, ptr = head;
    while (ptr->info != item)
    {
        temp = ptr;
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    free(ptr);
    return head;
}

node count_nodes(node head)
{
    if (head == NULL)
    {
        printf("\nEmpty List\n");
        return head;
    }
    node ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->next;
    }
    printf("\nTotal nodes = %d\n", count);
    return head;
}

node search_key(node head, int item)
{
    if (head == NULL)
    {
        printf("\nEmpty List");
        return head;
    }
    node ptr = head;
    int flag = 0;
    while (ptr != NULL)
    {
        if (ptr->info == item)
        {
            flag = 1;
            printf("\nElement is found\n");
            return head;
        }
        ptr = ptr->next;
    }
    printf("\nElement not found\n");
    return head;
}

node *reverseKNodes(node head, int k)
{
    node q = head;
    node r = NULL;
    node s;
    int count = 0;

    while (q != NULL && count < k)
    {
        s = r;
        r = q;
        q = q->next;
        r->next = s;
        count++;
    }
    if (q != NULL)
        head->next = reverseKNodes(q, k);

    return r;
}