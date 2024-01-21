#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *f;
    char str[80];
    f = fopen("abc.txt","w");
    if(f==NULL)
    {
        printf("Can not operate file ");
        exit(1);
    }
    printf("\nEnter the string \n");
    while(strlen(gets(str))>0)
    {
       fputs(str,f);
       fputs("\n",f);
    }
    fclose(f);
    printf("\n File contents \n");
    f = fopen("abc.txt","r");
    if(f==NULL)
    {
        printf("Can not operate file 2");
    }
    while(fgets(str,sizeof(str),f)!=NULL)
    {
        printf("%s",str);
    }
    fclose(f);
    return 0;
}