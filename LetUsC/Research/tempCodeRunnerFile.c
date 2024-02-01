#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 300
int main()
{
    char str[MAX];
    FILE *p;
    // p = fopen("mynote.txt","w");
    // printf("Enter the string : ");
    // while(strlen(gets(str))>0)
    // {
    //     fputs(str,p);
    //     fputs("\n",p);
    // }
    // fclose(p);
    char ch;
    p = fopen("mynote.txt","r");
    printf("here is your content \n");
    while (fgets(str,sizeof(str),p)!=NULL)
    {   
        printf("%s",str);
    }
    fclose(p);
    return 0;
}