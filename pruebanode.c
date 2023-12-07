#include<stdio.h>
#include<stdlib.h>
struct node {
  int data;
  struct node* next;
};
struct node* BuildOneTwoThree() {
  struct node* head = malloc(sizeof(struct node));
  struct node* second = NULL;
  struct node* third = NULL;

  second = malloc(sizeof(struct node));
  third = malloc(sizeof(struct node));

  head->data = 1;
  head->next = second;

  second->data = 2;
  second->next = third;

  third->data = 3;
  third->next = NULL;

  return head;
}

void print(struct node* head) {
  while(head) {
    printf("%d",head->data);
    head = head->next;
  }
  printf("\n");
}

int main() {
  struct node* myList = BuildOneTwoThree();
  print(myList);
  return 0;
}

