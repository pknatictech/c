/*Write a program to find the square of any number using function*/
#include<stdio.h>
int square(int);
int main()
{
int num;
printf("To find the square of numbers");
printf("\nEnter any number: ");
scanf("%d",&num);

int x;
x = square(num);
printf("x = %d",x-5);
    return 0;
}
int square(int num)
{
    printf("x = %d",num*num);
    return 0;    
}