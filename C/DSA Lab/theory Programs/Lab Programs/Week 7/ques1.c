#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;

void enqueue()
{
    struct node *ptr;
    int item;

    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW\n");
        return;
    }
    else
    {
        printf("\nEnter value?\n");
        scanf("%d", &item);
        ptr->data = item;
        if (front == NULL)
        {
            front = ptr;
            rear = ptr;
            front->next = NULL;
            rear->next = NULL;
        }
        else
        {
            rear->next = ptr;
            rear = ptr;
            rear->next = NULL;
        }
    }
    display();
}
void dequeue()
{
    struct node *ptr;
    if (front == NULL)
    {
        printf("\nUNDERFLOW\n");
        return;
    }
    else
    {
        ptr = front;
        front = front->next;
        free(ptr);
    }
    display();
}
void isEmpty()
{
    if (front == NULL)
    {
        printf("\nThe queue is empty\n");
    }
    else
    {
        printf("\nThe queue is not empty\n");
        display();
    }
}
void peek()
{
    if (front == NULL)
    {
        printf("\nThe queue is empty\n");
    }
    else
    {
        printf("The front/peek element is : %d", front->data);
        display();
    }
}
void display()
{
    struct node *ptr;
    ptr = front;
    if (front == NULL)
    {
        printf("\nEmpty queue\n");
    }
    else
    {
        printf("\nThe current queue is : \n");
        printf("Printing values .....\n");
        while (ptr != NULL)
        {
            printf("\n%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
}
void main()
{
    int choice;
    while (choice != 6)
    {
        printf("\nMain Menu\n");
        printf("\n1.Enqueue an element\n");
        printf("2.Dequeue an element\n");
        printf("3.Peek\n");
        printf("4.Display the queue\n");
        printf("5.Check isEmpty\n");
        printf("6.Exit\n");
        printf("\nEnter your choice ?");

        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            isEmpty();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("\nPlease enter valid choice..\n");
        }
    }
}