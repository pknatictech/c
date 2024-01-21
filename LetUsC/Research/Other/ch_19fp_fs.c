#include<stdio.h>
int main()
{
char str[] = "Yanshi is 21 mob 8630547";
char name[20];
char na[20];
char mo[20];
int age;
int number;
sscanf(str,"%s %s %d %s %d",name,na,&age,mo,&number);
 
printf("%s %s %d %s %d",name,na,age,mo,number); 
    return 0;
}
