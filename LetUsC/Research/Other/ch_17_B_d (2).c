#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct cricketer
{
    char name[20];
    int age;
    int matches;
    int runs;
};
int com(const void *x,const void *y)
{
    return (((struct cricketer*)x)->runs - ((struct cricketer*)y)->runs);
}
void insertrecords(struct cricketer *s, int n);
void record(struct cricketer *s,int n);
int main()
{
    int n;
    printf("How many Cricketers do you have : ");
    scanf("%d", &n);
    struct cricketer s[n];
    insertrecords(s, n);
    printf("\n\nPrint all the cricketers in assending order behalf of there averagen runs : \n");
    qsort(s,n,sizeof(struct cricketer),com); //assending whole structure based on their runs
    record(s,n);
    return 0;
}
void insertrecords(struct cricketer *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter the details of Cricketer No.%d\n", i + 1);
        printf("Enter the Name of : ");
        // scanf("%[^\n]s",s[i].name);
        scanf("%s", s[i].name);
        printf("Enter the Age : ");
        scanf("%d", &s[i].age);
        printf("Enter the Matches that he played : ");
        scanf("%d", &s[i].matches);
        printf("Enter the Averagen Runs That he made : ");
        scanf("%d", &s[i].runs);
    }
}
void record(struct cricketer *s,int n)
{
    for(int i = 0;i<n;i++)
    {
        printf("Details of Cricketer No.%d\n", i + 1);
        printf("Name of : \t\t\t%s\n", s[i].name);
        printf("Age : \t\t\t\t%d\n", s[i].age);
        printf("Matches that he played : \t%d\n", s[i].matches);
        printf("Averagen Runs That he made : \t%d\n\n", s[i].runs);
    }
}