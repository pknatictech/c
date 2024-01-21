#include<stdio.h>
int fact(int);
int main()
{ 
    int n,factorial;
    printf("How many numbers you want to enter: ");
    scanf("%d",&n);
    factorial = fact(n);
    printf("Factorial = %d",factorial);
    return 0;
}
int fact(int n)
{
    int fact,sum=0,j,i;
    for(i=1;i<=n;i++)
    {
        fact =1;
        for(int j=1;j<=i;j++)
        {
                fact = fact * j ;
                
        }
       sum = sum + fact/i;
    }
    return sum;
}



