#include<stdio.h>
int main()
{
   struct abc 
   {
      char name[20];
      int age;
      int sal;
   }emp[5],*ptr;
   ptr = emp;
   // scanf("%s",&ptr->name);
   scanf("%s",&emp[0].name);
   printf("%s",ptr->name);
   ptr++;
   scanf("%s",&ptr->name);
   printf("%s",emp[1].name);
   return 0;
}