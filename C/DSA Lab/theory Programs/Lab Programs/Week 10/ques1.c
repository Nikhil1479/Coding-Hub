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
struct node *smallest(struct node *root);
struct node *largest(struct node *root);
struct node *insert(struct node *root, int insert_key);
struct node *delete (struct node *root, int del_key);
struct node *case_a(struct node *root, struct node *par, struct node *ptr);
struct node *case_b(struct node *root, struct node *par, struct node *ptr);
struct node *case_c(struct node *root, struct node *par, struct node *ptr);
struct node *delete1(struct node *root, int item);
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
        printf("10 Delete\n");
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

        case 4:
            inorder_trav(root);
            break;

        case 5:
            post_trav(root);
            break;

        case 6:
            printf("\nEnter the key to be searched : ");
            scanf("%d", &k);
            ptr = search(root, k);
            if (ptr == NULL)
                printf("\nKey not present\n");
            else
                printf("\nKey present\n");
            break;

        case 7:
            ptr = smallest(root);
            if (ptr != NULL)
                printf("\nSmallest key is %d\n", ptr->info);

        case 8:
            ptr = largest(root);
            if (ptr != NULL)
                printf("\nLargest key is %d\n", ptr->info);
            break;

        case 9:
            printf("\n");
            display(root, 0);
            printf("\n");
            break;

        case 10:
            printf("\nEnter the key to be deleted : ");
            scanf("%d", &k);
            root = delete (root, k);
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

struct node *smallest(struct node *ptr)
{
    if (ptr != NULL)
        while (ptr->lchild != NULL)
            ptr = ptr->lchild;
    return ptr;
}

struct node *largest(struct node *ptr)
{
    if (ptr != NULL)
        while (ptr->rchild != NULL)
            ptr = ptr->rchild;
    return ptr;
}

struct node *delete1(struct node *root, int del_key)
{
    struct node *par, *ptr, *child, *succ, *parsucc;

    ptr = root;
    par = NULL;
    while (ptr != NULL)
    {
        if (del_key == ptr->info)
            break;
        par = ptr;
        if (del_key < ptr->info)
            ptr = ptr->lchild;
        else
            ptr = ptr->rchild;
    }

    if (ptr == NULL)
    {
        printf("\nDelete key not present in tree");
        return root;
    }

    if (ptr->lchild != NULL && ptr->rchild != NULL)
    {
        parsucc = ptr;
        succ = ptr->rchild;
        while (succ->lchild != NULL)
        {
            parsucc = succ;
            succ = succ->lchild;
        }
        ptr->info = succ->info;
        ptr = succ;
        par = parsucc;
    }

    if (ptr->lchild != NULL)
        child = ptr->lchild;
    else
        child = ptr->rchild;

    if (par == NULL)
        root = child;
    else if (ptr == par->lchild)
        par->lchild = child;
    else
        par->rchild = child;
    free(ptr);
    return root;
}

struct node *delete (struct node *root, int del_key)
{
    struct node *par, *ptr;

    ptr = root;
    par = NULL;
    while (ptr != NULL)
    {
        if (del_key == ptr->info)
            break;
        par = ptr;
        if (del_key < ptr->info)
            ptr = ptr->lchild;
        else
            ptr = ptr->rchild;
    }

    if (ptr == NULL)
        printf("Delete key not present in tree\n");
    else if (ptr->lchild != NULL && ptr->rchild != NULL)
        root = case_c(root, par, ptr);
    else if (ptr->lchild != NULL)
        root = case_b(root, par, ptr);
    else if (ptr->rchild != NULL)
        root = case_b(root, par, ptr);
    else
        root = case_a(root, par, ptr);

    return root;
}

struct node *case_a(struct node *root, struct node *par, struct node *ptr)
{
    if (par == NULL)
        root = NULL;
    else if (ptr == par->lchild)
        par->lchild = NULL;
    else
        par->rchild = NULL;
    free(ptr);
    return root;
}

struct node *case_b(struct node *root, struct node *par, struct node *ptr)
{
    struct node *child;

    if (ptr->lchild != NULL)
        child = ptr->lchild;
    else
        child = ptr->rchild;

    if (par == NULL)
        root = child;
    else if (ptr == par->lchild)
        par->lchild = child;
    else
        par->rchild = child;
    free(ptr);
    return root;
}

struct node *case_c(struct node *root, struct node *par, struct node *ptr)
{
    struct node *succ, *parsucc;

    parsucc = ptr;
    succ = ptr->rchild;
    while (succ->lchild != NULL)
    {
        parsucc = succ;
        succ = succ->lchild;
    }

    ptr->info = succ->info;

    if (succ->lchild == NULL && succ->rchild == NULL)
        root = case_a(root, parsucc, succ);
    else
        root = case_b(root, parsucc, succ);
    return root;
}

void preorder_trav(struct node *root)
{
    struct node *ptr = root;
    if (ptr == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    push_stack(ptr);
    while (!stack_empty())
    {
        ptr = pop_stack();
        printf("%d  ", ptr->info);
        if (ptr->rchild != NULL)
            push_stack(ptr->rchild);
        if (ptr->lchild != NULL)
            push_stack(ptr->lchild);
    }
    printf("\n");
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

void post_trav(struct node *root)
{
    struct node *ptr = root;
    struct node *q;

    if (ptr == NULL)
    {
        printf("Tree is empty\n");
        return;
    }
    q = root;
    while (1)
    {
        while (ptr->lchild != NULL)
        {
            push_stack(ptr);
            ptr = ptr->lchild;
        }

        while (ptr->rchild == NULL || ptr->rchild == q)
        {
            printf("%d  ", ptr->info);
            q = ptr;
            if (stack_empty())
                return;
            ptr = pop_stack();
        }
        push_stack(ptr);
        ptr = ptr->rchild;
    }
    printf("\n");
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
        display(ptr->rchild, level + 1);
        printf("\n");
        for (i = 0; i < level; i++)
            printf("    ");
        printf("%d", ptr->info);
        display(ptr->lchild, level + 1);
    }
}