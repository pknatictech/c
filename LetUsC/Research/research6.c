#include <stdio.h>
struct employee
{
    int empcode;
    char name[20];
    int date;
    int month;
    int year;
};
int m = 1;
typedef struct employee emp;
void inputvalue(emp *p, int n);
int ceckyearsleaps(int startyear, int endyear);
void valueprint(emp *p);
void valuefindbydate(emp *p, int n);
int countday(int date, int month, int year);
int main()
{
    int n, i;
    printf("Enter the number of employees : ");
    scanf("%d", &n);
    emp data[n];
    inputvalue(data, n);
    // valueprint(data,n);
    valuefindbydate(data, n);

    return 0;
}
int countday(int date, int month, int year)
{
    int am[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalday = 0, i;
    if ((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0))
    {
        am[1] = 29;
    }
    for (i = 0; i < month; i++)
    {
        totalday = totalday + am[i];
    }
    totalday = totalday + date;
    return totalday;
}
void valuefindbydate(emp *p, int n)
{
    int i, date, month, year, days, daysindata, compare;
    printf("Enter the date you want to check : ");
    scanf("%d/%d/%d", &date, &month, &year);
    days = countday(date, month, year);
    for (i = 0; i < n; i++)
    {
        daysindata = countday(p[i].date, p[i].month, p[i].year);
        compare = days + (365 - daysindata) + ((year - 1) - p[i].year) * 365;
        compare = compare + ceckyearsleaps(p[i].year, year - 1);
        if (compare / 365.0 >= 3.0)
        {
            valueprint(&p[i]);
        }
    }
}
int ceckyearsleaps(int startyear, int endyear)
{
    int i, count = 0;
    for (i = startyear; i < endyear; i++)
    {
        if (i % 100 != 0 && i % 4 == 0 || i % 400 == 0)
        {
            count++;
        }
    }
    return count;
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
        scanf("%d/%d/%d", &p[i].date, &p[i].month, &p[i].year);
        printf("\n");
    }
}
void valueprint(emp *p)
{
    printf("The Employee code of Employee no. %d : %d\n", m, p->empcode);
    printf("The Employee name of Employee no. %d : %s\n", m, p->name);
    printf("The year of joining of Employee no. %d : %d/%d/%d\n", m, p->date, p->month, p->year);
    printf("\n");

}