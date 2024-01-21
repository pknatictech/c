#include<stdio.h>
#include<string.h>
int main()
{
char *str[]={
    "Rajesh","Khushi","Radha","Yanshi",
    "Aman","Shyam"
};
 char *p;
 int i,j;
 for(i=0;i<=5;i++)
 {
    for(j=0;j<=5;j++)
    {
        if((strcmp(str[i],str[j]))<0)
        {
            p=str[i];
            str[i]=str[j];
            str[j]=p;
        }
    }
 }
 for(i=0;i<5;i++)
 {
    printf("%s\t",str[i]);
 }
    return 0;
}