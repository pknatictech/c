#include<stdio.h>
int main()
{
 FILE *fp;
 struct emp
 {
    char name[40]; int age; float bs;
 };
struct emp e;
char ch = 'y';
fp = fopen("Employee.dat","w");
while (ch=='y')
{
    printf("Enter name,age,salary:");
    scanf("%s %d %f",e.name,&e.age,&e.bs);
    fprintf("%s %d %f",e.name,&e.age,&e.bs);
}

 
 
    return 0;
}
