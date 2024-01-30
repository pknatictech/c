#include<stdio.h>
#include<stdlib.h>
int main()
{
    char ch;
    FILE *p,*c;
    p = fopen("mynote.txt","r");
    if(p==NULL)
    {
        printf("can not find the file to open.");
        exit(1);
    }
    c = fopen("pk.txt","w");
    if(c==NULL)
    {
        printf("can not create or open the file to write.");
        exit(2);
    }
    while(1)
    {
        ch = fgetc(p);
        if(ch==EOF)
        break;
        else
        fputc(ch,c);
    }
    fclose(p);
    fclose(c);
    return 0;
}