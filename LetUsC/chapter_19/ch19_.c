#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *ff,*sf;
    char ch;
    ff = fopen("f1.txt","r");
    if(ff == NULL)
    {
        printf("Cannot find the file1");
        exit(1);
    }
    sf = fopen("f2.txt","w");
    if(sf == NULL)
    {
        printf("Cannot find the file2");
        exit(2);
    }
    while(1)
    {
        ch = fgetc(ff);
        if(ch == EOF)
        {
            break;
        }
        else
        {
            fputc(ch,sf);
        }
    }
    fclose(ff);
    fclose(sf);
    return 0;
}