#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
FILE *p;
p= fopen("xyz.txt","r");
while(fgets(str,sizeof(str),p)!=NULL)
{
    printf("%s",str);
}
 fclose(p);

 p = fopen("def.yanshi","w");
 printf("Enter your string for new file : ");
 while(strlen(gets(str))>0)
 {
   fputs(str,p);
   fputs("\n",p);
 }
 fclose(p);
 printf("Created file\n");
 p= fopen("def.yanshi","r");
while(fgets(str,sizeof(str),p)!=NULL)
{
    printf("%s",str);
}
 fclose(p);

    return 0;
}
