#include <stdio.h>
int main()
{
int yr;
printf("Enter Year = ");
scanf("%d",&yr);
if(yr%100==0)
{
    if(yr%400==0)
    printf("Leap Year\n");
    else
    printf("Not a leap year\n");   
}
else
{
    if(yr%4==0)
    printf("Leap Year\n");
    else
    printf("Not a leap year");
}
    return 0;
}