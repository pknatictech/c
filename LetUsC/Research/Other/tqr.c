#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[50];
FILE *p;
 p = fopen("pqr.txt","r");
scanf("%[^/n]s",str);
fputs(str,p);
fclose(p);
p = fopen("pqr.txt","w");
fgets(str,sizeof(str),p);
printf("%s",str);
    return 0;
}