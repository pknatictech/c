#include<stdio.h>
typedef struct node {
        int data;
        struct node *next;
}node;
void fun(node *head,int data)
{
    head->data = data;
    head->next = NULL;
}
void print(node *head)
{
    printf("%d",head->data);
    head = head -> data;
}
int main()
{
    node n1,n2;
    node *head;
    fun(&n1,7);
    printf("%d ",n1.data);
    fun(&n2,9);
    n1.next = &n2;
    printf("%d ",n2.data);
    print(head);
    return 0;
}