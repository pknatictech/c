#include<stdio.h>
#include<string.h>
typedef struct student 
{
    int id;
    char name[40];
}student;
void changename(student *ptr)
{
    strcpy(ptr->name,"na");
}
int main()
{
  student s ={101,"abc"};
  changename(&s);
  printf("%d %s",s.id,s.name);
    return 0;
}