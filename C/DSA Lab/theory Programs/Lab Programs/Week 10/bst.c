#include <stdio.h>
#include <stdlib.h>
#define MAX 50

struct node
{
    struct node *left_child;
    int info;
    struct node *right_child;
};

struct node *search(struct node *root, int skey);
struct node *smallest(struct node *root);
struct node *largest(struct node *root);
struct node *insert(struct node *root, int ikey);
void preorder_trav(struct node *root);
void inorder_trav(struct node *root);
void post_trav(struct node *root);
void display(struct node *ptr, int level);

struct node *queue[MAX];
int front = -1, rear = -1;
void insert_queue(struct node *item);
struct node *del_queue();
int queue_empty();

struct node *stack[MAX];
int top = -1;
void push_stack(struct node *item);
struct node *pop_stack();
int stack_empty();

int main()
{
    struct node *root = NULL, *ptr;
    int choice, k;

    while (1)
    {
        printf("\n");
        printf("1.Quit\n");
        printf("2.Create\n");
        printf("3.Preorder Traversal\n");
        printf("4.Inorder Traversal\n");
        printf("5.Postorder Traversal\n");
        printf("6.Search\n");
        printf("7 Find Smallest Element\n");
        printf("8.Find Largest Element\n");
        printf("9 Display\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            exit(1);

        case 2:
            printf("\nEnter the key to be inserted : ");
            scanf("%d", &k);
            root = insert(root, k);
            break;

        case 3:
            preorder_trav(root);
            break;

        default:
            printf("\nInvalid choice\n");
        }
    }

    return 0;
}

struct node *search(struct node *ptr, int skey)
{
    while (ptr != NULL)
    {
        if (skey < ptr->info)
            ptr = ptr->left_child;
        else if (skey > ptr->info)
            ptr = ptr->right_child;
        else
            return ptr;
    }
    return NULL;
}

struct node *insert(struct node *root, int ikey)
{
    struct node *tmp, *par, *ptr;

    ptr = root;
    par = NULL;

    while (ptr != NULL)
    {
        par = ptr;
        if (ikey < ptr->info)
            ptr = ptr->left_child;
        else if (ikey > ptr->info)
            ptr = ptr->right_child;
        else
        {
            printf("\nDuplicate key");
            return root;
        }
    }

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = ikey;
    tmp->left_child = NULL;
    tmp->right_child = NULL;

    if (par == NULL)
        root = tmp;
    else if (ikey < par->info)
        par->left_child = tmp;
    else
        par->right_child = tmp;

    return root;
}

// if (ptr == NULL)
// {
//     printf("\ndkey not present in tree");
//     return root;
// }

struct node *smallest(struct node *ptr)
{
    if (ptr != NULL)
        while (ptr->left_child != NULL)
            ptr = ptr->left_child;
    return ptr;
}

struct node *largest(struct node *ptr)
{
    if (ptr != NULL)
        while (ptr->right_child != NULL)
            ptr = ptr->right_child;
    return ptr;
}

void insert_queue(struct node *item)
{
    if (rear == MAX - 1)
    {
        printf("Queue Overflow\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear = rear + 1;
    queue[rear] = item;
}

struct node *del_queue()
{
    struct node *item;
    if (front == -1 || front == rear + 1)
    {
        printf("Queue Underflow\n");
        return 0;
    }
    item = queue[front];
    front = front + 1;
    return item;
}

int queue_empty()
{
    if (front == -1 || front == rear + 1)
        return 1;
    else
        return 0;
}

void push_stack(struct node *item)
{
    if (top == (MAX - 1))
    {
        printf("Stack Overflow\n");
        return;
    }
    top = top + 1;
    stack[top] = item;
}

struct node *pop_stack()
{
    struct node *item;
    if (top == -1)
    {
        printf("Stack Underflow....\n");
        exit(1);
    }
    item = stack[top];
    top = top - 1;
    return item;
}

int stack_empty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

void display(struct node *ptr, int level)
{
    int i;
    if (ptr == NULL)
        return;
    else
    {
        display(ptr->right_child, level + 1);
        printf("\n");
        for (i = 0; i < level; i++)
            printf("    ");
        printf("%d", ptr->info);
        display(ptr->left_child, level + 1);
    }
}