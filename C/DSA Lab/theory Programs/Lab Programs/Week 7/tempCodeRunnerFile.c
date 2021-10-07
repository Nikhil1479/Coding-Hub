#include <stdio.h>
#include <stdlib.h>
#define max 6
int queue[max];
int front = -1;
int rear = -1;
void enqueue(int element)
{
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = element;
    }
    else if ((rear + 1) % max == front)
    {
        printf("Queue is overflow..");
    }
    else
    {
        rear = (rear + 1) % max;
        queue[rear] = element;
    }
}

int dequeue()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is underflow..");
    }
    else if (front == rear)
    {
        printf("\nThe dequeued element is %d", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\nThe dequeued element is %d", queue[front]);
        front = (front + 1) % max;
    }
}

void display()
{
    int i;
    if (front == -1 && rear == -1)
        printf("\nEMPTY QUEUE\n");
    else
    {
        printf("\nFRONT INDEX : %d ", queue[front]);
        printf("\nQUEUE ELEMENTS : ");
        for (i = front; i != rear; i = ((i + 1) % max))
        {
            printf("%d ", queue[i]);
        }
        printf("%d ", queue[i]);
        printf("\nREAR INDEX : %d \n", rear);
    }
}
void peek()
{
    if (front == -1 && rear == -1)
    {
        printf("\n Queue is empty..");
    }
    else
    {
        printf("\nThe front/peek element is : %d", queue[front]);
    }
}
void isEmpty()
{
    if (front == -1 && rear == -1)
    {
        printf("\n Queue is empty..");
    }
    else
    {
        printf("\n The queue is not empty.. ");
    }
}
void isFull()
{
    if ((rear + 1) % max == front)
    {
        printf("Queue is full..");
    }
    else
    {
        printf("\n The queue is not full.. ");
    }
}
int main()
{
    int choice = 0, x;
    printf("\n*************************Main Menu*****************************\n");
    while (choice != 7)
    {
        printf("\n----------------------------------------------------------------\n");
        printf("\nPress 1: Enqueue");
        printf("\nPress 2: Dequeue");
        printf("\nPress 3: Peek");
        printf("\nPress 4: Display of elements");
        printf("\nPress 5: IsEmpty check ");
        printf("\nPress 6: IsFull check ");
        printf("\nPress 7: Exit ");
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
            isFull();
            break;
        case 7:
            printf("\nExiting.....");
            exit(0);
            break;
        default:
            printf("\nPlease enter valid choice..\n");
        }
    }
    return 0;
}