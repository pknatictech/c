/*Write a program to convert decimal number into binary number*/
#include<stdio.h>
#include<math.h>
int tobin(int);
int main()
{
    int num,bin;
    printf("CONVERT DECIMAL TO BINARY");
    printf("\nEnter any number that you want to enter: ");
    scanf("%d",&num);
    bin = tobin(num);
    printf("Binary value is %d",bin);
    return 0;
}
int tobin(int n)
{
    int rem,f=0,bin=0;
    while(n!=0)
    {
    rem = n%2;
    n = n / 2;
    bin = bin+rem*pow(10,f);
    f++;
    }
   return  bin;
}