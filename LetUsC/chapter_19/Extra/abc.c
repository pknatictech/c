#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    FILE *p;
    char str[80];
    p = fopen("xyz.txt","w");
    scanf("%[^\n]s",str);
    fputs(str,p);
    fclose(p);
    p = fopen("xyz.txt","r");
    fgets(str,sizeof(str),p);
    printf("%s",str);
    return 0;
}

