#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
  
    
};
void push(int **a,int num)
{
    a->data=num;
    a->next=NULL;
    
}
int main()
{ 
    int x,n=1;
    printf("(1) Input value \n(2) Erase Value \n(3) Print Stack \n(4) Stop And Print\n");
    printf("Choose the option : ");
    scanf("%d",&x);
    while(n!=0)
    {
        switch (x)
        {
            case 1:
            {
                int num;
                struct node *a,b,c;
                printf("Enter the value : ");
                scanf("%d",&num);
                push(&a,num);
                printf("data = %d",a.data);
                break;
            }
            case 2:
            {
                break;
            }
            case 3:
            {
                
                break;
            }
            case 4:
            {
                return 0;
            }
        
            
        }
    
    
    }
    
 
    

    return 0;
}