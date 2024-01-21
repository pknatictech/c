/*Write a funtion to find the number is odd or even using funtion calling*/
#include<stdio.h>
void evenodd(int a);
int main()
{ 
    int num;
printf("Enter any number to check whether no. is odd or even : ");
scanf("%d",&num);
evenodd(num);
    return 0;
}
void evenodd(int b)
{
    int a;
    if(a%2==0)
    {
        printf("Number is even");
    }
    else 
    {
        printf("Number is odd");
    }
}