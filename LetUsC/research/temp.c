#include<stdio.h>
#include<math.h>
int fact(float x);
int main()
{
    int y=1,i=1;
    float x,p;
    printf("Enter any number : ");
    scanf("%f",&x);
    for(i=1;i<=7;i++)
    {
        p = pow(x,i);
        
    }
    
    return 0;
}
int fact(float x)