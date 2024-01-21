#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *name[4];
int x = 0;
// void names(char *name)
// {
// int i,len;
// char n[50];
// char *p;
// for(i=0;i<=3;i++)
// {
// printf("Enter the first name : ");
// scanf("%s",n);
// len = strlen(n);
// p = (char*)malloc(len+1);
// strcpy(p,n);
// name=p;
// }
// }
void names(char *ptr);
int main()
{
// char *name[6],n[50];
// int x;
// printf("Enter how many numbers you want to enter : ");
// scanf("%d",&x);
char n[50];
// names(*name);
int i,len;
char *p;
for(i=0;i<=3;i++)
{
    printf("Enter the name : ");
    scanf("%s",n);
    names(n);
}
for(i=0;i<=4;i++)
{
    printf("%s\n",name[i]);
}

// for(i=0;i<=3;i++)
// {
//     printf(" Entered %d name is %s\n",i+1,name[i]);
// }
    return 0;
}

void names(char *ptr)
{
    int len;
    char *p;
    // printf("%s\n",ptr);
    len = strlen(ptr);
    p = (char*)malloc(len+1);
    strcpy(p,ptr);
    name[x]=p;
    printf("x is %d and string %s\n",x,name[x]);
    x++;
}
