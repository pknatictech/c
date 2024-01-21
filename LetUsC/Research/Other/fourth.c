
// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     struct node
//     {
//         int data;
//         struct node *next;
//     };

//     //declaring nodes
//     struct node *a,*b,*c;

    

//        a = malloc(sizeof(struct node));
//        b = malloc(sizeof(struct node));
//        c = malloc(sizeof(struct node));


//      a->data = 100;
//      printf("%d\ns",a->data);
//      b->data = 200;
//      c->data = 300;
//      a->next = b;
//      b->next = c;
//      c->next = NULL;


//     struct node *temp = a;

//     while(temp != NULL)
//     {
//         printf("%d ",temp->data);
//         temp = temp->next;
//     }

//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;   
};
int main()
{
  struct node *x,*y,*z;
    
    x = malloc(sizeof(struct node));
    y = malloc(sizeof(struct node));
    z = malloc(sizeof(struct node));

    
    x->data = 700;
    y->data = 800;
    z->data = 900;
    x->next = y;
    y->next = z;
    z->next = NULL;
     

    struct node *temp = x;

    while (temp != NULL)
    {
        printf("%d",temp->data);
        temp = temp->next;
    }

    free(x);
    free(y);
    free(z);

    
    return 0;
}