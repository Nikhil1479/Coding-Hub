#include <stdio.h>
#include <stdlib.h>
#define MAX 50

struct node
{
    struct node *lchild;
    int info;
    struct node *rchild;
};

struct node *search(struct node *root, int search_key);
struct node *insert(struct node *root, int insert_key);
void inorder_trav(struct node *root);

struct node *stack[MAX];
int top = -1;
void push_stack(struct node *item);
struct node *pop_stack();
int stack_empty();

int main()
{
    struct node *root = NULL, *ptr;
    int choice, k;

    root = insert(root, 5);
    root = insert(root, 10);
    root = insert(root, 7);
    root = insert(root, 4);
    root = insert(root, 9);
    root = insert(root, 17);
    root = insert(root, 21);
    root = insert(root, 12);
    root = insert(root, 6);
    root = insert(root, 3);
    root = insert(root, 2);
    root = insert(root, 11);
    while (1)
    {

        printf("\nBinary Search Tree Menu");
        printf("\n");
        printf("1.Quit\n");
        printf("2.Inorder Traversal\n");
        printf("3.Search\n");

        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            exit(1);
        case 2:
            inorder_trav(root);
            break;
        case 3:
            printf("\nEnter the key to be searched : ");
            scanf("%d", &k);
            ptr = search(root, k);
            if (ptr == NULL)
                printf("\nKey not present\n");
            else
                printf("\nKey present\n");
            break;
        default:
            printf("\nInvalid choice\n");
        }
    }

    return 0;
}

struct node *search(struct node *ptr, int search_key)
{
    while (ptr != NULL)
    {
        if (search_key < ptr->info)
            ptr = ptr->lchild;
        else if (search_key > ptr->info)
            ptr = ptr->rchild;
        else
            return ptr;
    }
    return NULL;
}

struct node *insert(struct node *root, int insert_key)
{
    struct node *tmp, *par, *ptr;

    ptr = root;
    par = NULL;

    while (ptr != NULL)
    {
        par = ptr;
        if (insert_key < ptr->info)
            ptr = ptr->lchild;
        else if (insert_key > ptr->info)
            ptr = ptr->rchild;
        else
        {
            printf("\nDuplicate key");
            return root;
        }
    }

    tmp = (struct node *)malloc(sizeof(struct node));
    tmp->info = insert_key;
    tmp->lchild = NULL;
    tmp->rchild = NULL;

    if (par == NULL)
        root = tmp;
    else if (insert_key < par->info)
        par->lchild = tmp;
    else
        par->rchild = tmp;

    return root;
}
void inorder_trav(struct node *root)
{
    struct node *ptr = root;

    if (ptr == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    while (1)
    {
        while (ptr->lchild != NULL)
        {
            push_stack(ptr);
            ptr = ptr->lchild;
        }

        while (ptr->rchild == NULL)
        {
            printf("%d  ", ptr->info);
            if (stack_empty())
                return;
            ptr = pop_stack();
        }
        printf("%d  ", ptr->info);
        ptr = ptr->rchild;
    }
    printf("\n");
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
