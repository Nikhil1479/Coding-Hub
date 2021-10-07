#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front = -1;
struct node *rear = -1;

void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if (rear == -1)
    {
        front = rear = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;
    }
}

void dequeue()
{
    struct node *temp;
    temp = front;
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
    }
    else if (front == rear)
    {
        front = rear = -1;
        free(temp);
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(temp);
    }
}

int peek()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty");
    }
    else
    {
        printf("\nThe front element is %d", front->data);
    }
}

void isEmpty()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is empty ");
    }
    else
    {
        printf("\nQueue is not empty ");
    }
}

void display()
{
    struct node *temp;
    temp = front;
    printf("\n The elements in a Queue are : ");
    if ((front == -1) && (rear == -1))
    {
        printf("Queue is empty");
    }

    else
    {
        while (temp->next != front)
        {
            printf("%d,", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}

int main()
{

    int choice = 0, x;
    printf("\n*************************Main Menu*****************************\n");
    while (choice != 6)
    {
        printf("\n----------------------------------------------------------------\n");
        printf("\nPress 1: Enqueue");
        printf("\nPress 2: Dequeue");
        printf("\nPress 3: Peek");
        printf("\nPress 4: Display of elements");
        printf("\nPress 5: IsEmpty check ");
        printf("\nPress 6: Exit ");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("Enter the element which is to be inserted : ");
            x = 0;
            scanf("%d", &x);
            enqueue(x);
            display();
            break;
        case 2:
            dequeue();
            display();
            break;
        case 3:
            peek();
            display();
            break;
        case 4:
            display();
            break;
        case 5:
            isEmpty();
            break;
        case 6:
            printf("\nExiting.....");
            exit(0);
            break;
        default:
            printf("\nPlease enter valid choice..\n");
        }
    }
    return 0;
}