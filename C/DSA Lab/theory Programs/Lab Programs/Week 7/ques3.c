#define size 5
#include <stdio.h>
#include <stdlib.h>
int deque[size];
int f = -1, r = -1;

void enqueue_front(int x)
{
    if ((f == 0 && r == size - 1) || (f == r + 1))
    {
        printf("deque is full");
    }
    else if ((f == -1) && (r == -1))
    {
        f = r = 0;
        deque[f] = x;
    }
    else if (f == 0)
    {
        f = size - 1;
        deque[f] = x;
    }
    else
    {
        f = f - 1;
        deque[f] = x;
    }
}

void enqueue_rear(int x)
{
    if ((f == 0 && r == size - 1) || (f == r + 1))
    {
        printf("deque is full");
    }
    else if ((f == -1) && (r == -1))
    {
        r = 0;
        deque[r] = x;
    }
    else if (r == size - 1)
    {
        r = 0;
        deque[r] = x;
    }
    else
    {
        r++;
        deque[r] = x;
    }
}

void display()
{
    int i = f;
    printf("\n Elements in the deque are : ");

    while (i != r)
    {
        printf("%d ", deque[i]);
        i = (i + 1) % size;
    }
    printf("%d", deque[r]);
}

void getfront()
{
    if ((f == -1) && (r == -1))
    {
        printf("Deque is empty");
    }
    else
    {
        printf("\nThe value of the front is: %d", deque[f]);
    }
}

void getrear()
{
    if ((f == -1) && (r == -1))
    {
        printf("Deque is empty");
    }
    else
    {
        printf("\nThe value of the rear is: %d", deque[r]);
    }
}

void dequeue_front()
{
    if ((f == -1) && (r == -1))
    {
        printf("Deque is empty");
    }
    else if (f == r)
    {
        printf("\nThe deleted element is %d", deque[f]);
        f = -1;
        r = -1;
    }
    else if (f == (size - 1))
    {
        printf("\nThe deleted element is %d", deque[f]);
        f = 0;
    }
    else
    {
        printf("\nThe deleted element is %d", deque[f]);
        f = f + 1;
    }
}

void dequeue_rear()
{
    if ((f == -1) && (r == -1))
    {
        printf("Deque is empty");
    }
    else if (f == r)
    {
        printf("\nThe deleted element is %d", deque[r]);
        f = -1;
        r = -1;
    }
    else if (r == 0)
    {
        printf("\nThe deleted element is %d", deque[r]);
        r = size - 1;
    }
    else
    {
        printf("\nThe deleted element is %d", deque[r]);
        r = r - 1;
    }
}

int main()
{

    int choice = 0, x;
    printf("\n*************************Main Menu*****************************\n");
    while (choice != 8)
    {
        printf("\n----------------------------------------------------------------\n");
        printf("\nPress 1: Enqueue Front ");
        printf("\nPress 2: Enqueue Rear ");
        printf("\nPress 3: Dequeue Front");
        printf("\nPress 4: Dequeue Rear ");
        printf("\nPress 5: Get Front element");
        printf("\nPress 6: Get Rear element");
        printf("\nPress 7: Display of elements");
        printf("\nPress 8: Exit ");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("Enter the element which is to be inserted : ");
            x = 0;
            scanf("%d", &x);
            enqueue_front(x);
            display();
            break;
        case 2:
            printf("Enter the element which is to be inserted : ");
            x = 0;
            scanf("%d", &x);
            enqueue_rear(x);
            display();
            break;
        case 3:
            dequeue_front();
            display();
            break;
        case 4:
            dequeue_rear();
            display();
            break;
        case 5:
            getfront();
            display();
            break;
        case 6:
            getrear();
            display();
            break;
        case 7:
            display();
            break;
        case 8:
            printf("\nExiting.....");
            exit(0);
            break;
        default:
            printf("\nPlease enter valid choice..\n");
        }
    }
    return 0;
}