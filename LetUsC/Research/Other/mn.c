#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *p;
    char str[50];
    char ch;
    int x=1;
    int n=0;
    p = fopen("pq.txt","w");
    while (x<=4)
    {
        printf("Enter the name = ");
        gets(str);
        fputs(str,p);
        fputs("\t",p);
        printf("Enter the age = ");
        gets(str);
        fputs(str,p);
        fputs("\n",p);
        x++;
    }
    
    fclose(p);
    p = fopen("pq.txt","r");
    while(fgets(str,sizeof(str),p)!=NULL)
    {

        
        printf("%s",str);
    }
    fclose(p);
    // printf("Number of lines = %d",x) ;   
    return 0;
}