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
struct node *insert(struct node *root, int ikey);
void display(struct node *ptr, int level);

int main()
{
    struct node *root = NULL, *ptr;
    int choice, k;

    while (1)
    {
        printf("\n");
        printf("1.Quit\n");
        printf("2.Insert\n");
        printf("3.Search\n");
        printf("4 Display\n");
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
            printf("\nEnter the key to be searched : ");
            scanf("%d", &k);
            ptr = search(root, k);
            if (ptr == NULL)
                printf("\nKey not present\n");
            else
                printf("\nKey present\n");
            break;

        case 4:
            printf("\n");
            display(root, 0);
            printf("\n");
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