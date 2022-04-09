#include <stdio.h>
#include <stdlib.h>

struct Node
{
  int data;
  struct Node *next; // pointer to another node that's name is next
};
typedef struct Node Node; // typedef to Node

void insertAtBegining(Node *head, int newData)
{
  Node *new_node_addr = malloc(sizeof(Node)); // type casting is bad, why should i cast this?

  new_node_addr->data = newData;
  new_node_addr->next = head;

  head = new_node_addr;
}

void insertAtEnd(Node *head, int newData)
{
  Node *temp = head;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }

  // Create New Node
  Node *new_node_addr = malloc(sizeof(Node));
  new_node_addr->data = newData;
  new_node_addr->next = NULL;

  temp->next = new_node_addr;
}

// print the linked list value
void printLinkedlist(Node *p)
{
  while (p != NULL)
  {
    printf("%d ->", p->data);
    p = p->next;
  }
  printf("NULL\n");
}

int main()
{
  Node *head;
  Node *one = NULL;
  Node *two = NULL;
  Node *three = NULL;

  one = malloc(sizeof(Node));
  two = malloc(sizeof(Node));
  three = malloc(sizeof(Node));

  one->data = 1;
  two->data = 2;
  three->data = 3;

  one->next = two;
  two->next = three;
  three->next = NULL;

  head = one;

  printLinkedlist(head);
}