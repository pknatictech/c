#include<stdio.h>
int main()
{
struct employee
{
    char f_name[10];
    char l_name[10];
    int salary;
};
struct employee n[3];
  for(int i=0;i<=3;i++)
  {
    printf("Enter the name of employee first name, last name and his salary ");
    scanf("%s %s %d",&n[i].f_name,&n[i].l_name,&n[i].salary);
    printf("%s %s %d \n",n[i].f_name,n[i].l_name,n[i].salary);
  }
 


    return 0;
}