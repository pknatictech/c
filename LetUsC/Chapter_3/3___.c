/*If cost price and selling price of an item is input through the keyboard, Write a program to determine whether the seller has made profit or incurred loss. Also determine how much profite he made or loss he incurred.*/
#include <stdio.h>
int main()
{
    float sp,np;
    printf("Enter purchase cost = ");
    scanf("%f",&np);
    printf("Enter Sale Amount = ");
    scanf("%f",&sp);
    if(np>sp)
    {
        printf("Supplier made lose = Rs.%.2f",sp-np);
    }
    if(sp>np)
    {
        printf("Supplier made profit = Rs.%.2f",sp-np);
    }
    if(sp==np)
    {
        printf("Supplier made no profit no loss ");
    }
    return 0;
}