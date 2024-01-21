#include<stdio.h>
#include<stdlib.h>
int x = 1;
struct node
{
    int data;
    struct node *next;
};
void fun(struct node **p,int value);
int main()
{
    struct node *n1;
    fun(&n1,45);
    fun(&n1,50);
    fun(&n1,60);
    
    return 0;
}
void fun(struct node **p, int value)
{
    struct node *q;
    q = (struct node*)malloc(sizeof(struct node));
    q->data = value;
    q->next = p;
    p = q;
}
