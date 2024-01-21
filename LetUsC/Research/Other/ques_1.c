/*Program to add two distances in the inch-feet system*/
#include<stdio.h>
struct distance
{
    int feet;
    float inch;
    
};
int main()
{  
    struct distance d1,d2,result;
    
    
    printf("Enter the first distance\n");
    printf("Enter the distance in feet: ");
    scanf("%d",&d1.feet);
    printf("Enter the distance in inch: ");
    scanf("%f",&d1.inch);

    printf("Enter the second distance\n");
    printf("Enter the distance in feet: ");
    scanf("%d",&d2.feet);
    printf("Enter the distance in inch: ");
    scanf("%f",&d2.inch);
    

    result.feet = d1.feet + d2.feet;
    result.inch = d1.inch + d2.inch;

    while(result.inch>= 12.0)
    {
        result.inch = result.inch-12.0;
        ++result.feet;
    }
    printf("\nSum of distacnces = %d ' %0.2f", result.feet,result.inch);

    return 0;
}