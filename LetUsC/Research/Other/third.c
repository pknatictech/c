#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node *next;
};
int main()
{
  struct node *head = malloc(sizeof(struct node));
  head->data = 10;
  head->next = malloc(sizeof(struct node));
  head->next->data = 20;
  head->next->next = NULL;
  printf("%d\n",head->data);
  printf("%d\n",head->next->data);
  printf("%d",head->next->next );
    return 0;
}