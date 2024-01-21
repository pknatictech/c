#include<stdio.h>
struct diff_year
{
    int date;
    int months;
    int year;
};
void differenceyear(int)

int main()
{
    struct diff_year c_date,p_date;
    printf("Enter the past date: ");
    scanf("%d %d %d",&c_date.date,&c_date.months,&c_date.year);
    printf("Enter the past date : ");
    scanf("%d %d %d",&p_date.date,&p_date.months,&p_date.year); 
    return 0;
}