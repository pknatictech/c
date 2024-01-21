#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n=1;
 char ch;
FILE *p,*w;
char str[20];
printf("This is for writing\n");
w = fopen("detail.txt","a");
while(strlen(gets(str))>0)
{
    fputs(str,w);
    fputs("\n",w);
}
fclose(w);
printf("This is for reading\n");
p = fopen("detail.txt","r");

// while(1)
// {
//   ch = getc(p);
//   if(ch==(-1))
//   break;
//   printf("%c",ch);
//}
while(fgets(str,sizeof(str),p)!=NULL)
{
printf("%s",str);
}
fclose(p);
    return 0;
}