#include<stdio.h>
int main()
{
struct address
{
    char phone[10]; char city[10]; int pin;
};
struct emp
{
    char name[10]; struct address a;    
};
struct emp e = {"radha","342609","Aligarh",202001};
printf("name = %s   phone = %s\n",e.name,e.a.phone);
printf("city = %s   pin = %d\n",e.a.city,e.a.pin);

    return 0;
}