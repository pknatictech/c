#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node n1, n2, n3, p, k;
void normal();
void link();
void link2();
int main()
{
    // normal();
    // link();
    link2();
    return 0;
}
void link2()
{
    k.data = 10;
    k.next = (struct node *)malloc(sizeof(struct node));
    k.next->data = 9;
    k.next->next = (struct node *)malloc(sizeof(struct node));
    k.next->next->data= 11;
    k.next->next->next= NULL;
    struct node *q;
    
    
    
}
void link()
{
    p.data = 10;
    p.next = (struct node *)malloc(sizeof(struct node));
    p.next->data = 9;
    p.next->next = NULL;
    printf("%d\n", p.data);
    printf("%d\n", p.next->data);
}
void normal()
{
    n1.data = 30;
    n1.next = &n2;
    n2.data = 10;
    n2.next = &n3;
    n3.data = -6;
    n3.next = NULL;
    printf("n1 data = %d\n", n1.data);
    printf("n2 data = %d\n", n2.data);
    printf("n3 data = %d\n", n3.data);
}