/*write a program to swap two numbers using funtion calling*/
#include<stdio.h>
void swap(int a, int b);
int main()
{ int c,d;
printf("Enter two number to swap the numbers: ");
scanf("%d %d",&c,&d);
printf("Before swaping : %d %d",c,d);
swap(c,d);
    return 0;
}
void swap(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf(" After swaping : %d %d",a,b);

}