#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

struct node
{
  int value;
  struct node *next;
};

void rearrange(struct node *list)
{
  struct node *p, *q, *head;

  int temp;

  if (!list || !list->next)
    return;
  p = list;
  q = list;
  head = list;
  printf("%d\n", list->value);
  printf("%d\n ", p->value);
  printf("%d\n ", q->value);
  printf("%d\n ", head->value);
  while (q)
  {
    temp = p->value;
    p->value = q->value;
    q->value = temp;
    p = q->next;
    q = p ? p->next : 0;
  }
  while (head != NULL)
  {
    printf("%d ", head->value);
    head = head->next;
  }
}

void insert(int num, struct node *list)
{
  struct node *newNode = (struct node *)malloc(sizeof(struct node));
  newNode->value = num;
  newNode->next = NULL;
  list = newNode;
  // printf("Inserted Element : %d\n", num);
}

int main()
{
  struct node *list;
  insert(1, list);
  insert(2, list);
  insert(3, list);
  insert(4, list);
  insert(5, list);
  insert(6, list);
  printf("%d", list->value);
  rearrange(list);
  return 0;
}