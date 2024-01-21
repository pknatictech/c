#include <stdio.h>
struct employee
{
    int empcode;
    char name[20];
    int date;
    int month;
    int year;
};
typedef struct employee emp;
void inputvalue(emp *p, int n);
void valueprint(emp *p, int n);
void valuefindbydate(emp *p, int n);
int countday(int date,int month, int year);
int main()
{
    int n,i;
    printf("Enter the number of employees : ");
    scanf("%d",&n);
    emp data[n];
    // inputvalue(data,n);
    // valueprint(data,n);
    valuefindbydate(data,n);

    return 0;
}
int countday(int date,int month, int year)
{
    int am[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int totalday=0,i;
    for(i=0;i<month;i++)
    {
        totalday = totalday + am[i];
    }
    totalday = totalday + date;
    if((year%400==0)||(year%100!=0) && (year%4==0))
    {
        totalday++;
    }
    return totalday;
}
void valuefindbydate(emp *p, int n)
{
    int i,date,month,year,days;
    printf("Enter the date you want to check : ");
    scanf("%d/%d/%d",&date,&month,&year);
    days = countday(date,month,year);
    printf("Total days count : %d",days);
    
}
void inputvalue(emp *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("Enter the Employee code %d : ", i + 1);
        scanf("%d", &p[i].empcode);
        getchar();
        printf("Enter the Employee name %d : ", i + 1);
        gets(p[i].name);
        printf("Enter the year of joining in XX/XX/XXXX %d : ", i + 1);
        scanf("%d/%d/%d",&p[i].date,&p[i].month,&p[i].year);
        printf("\n");
    }
}
void valueprint(emp *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("The Employee code of Employee no. %d : %d\n", i + 1,p[i].empcode);
        printf("The Employee name of Employee no. %d : %s\n", i + 1,p[i].name);
        printf("The year of joining of Employee no. %d : %d/%d/%d\n", i + 1,p[i].date,p[i].month,p[i].year);
        printf("\n");
    }
}