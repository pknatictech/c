#include<stdio.h>
#include<string.h>
void convert(char *str);
int main()
{
    char *all[] = {"This is string.","I am the owner.","Everyone can use this."};
    int i;
    // for(i=0;i<sizeof(all)/sizeof(all[0]);i++)
    {
        convert(all[0]);
    }
    // for(i=0;i<sizeof(all)/sizeof(all[0]);i++)
    // {
    //     printf("%s\n",all[i]);
    // }
    return 0;
}
void convert(char *str)
{
    char *t,chaar;
    int i,len;
    len = strlen(str); 
    // printf("Length %d\n",len);
    t = str;// + len ;
    // for(i=1;i<len/2;i++)
    // {
    //     chaar = *str;
    //     *str = *t;
    //     *t = chaar;
    //     str++;
    //     t--;
    // }
    // chaar = *str;
    // *str = *t;
    // *t = chaar;
    *(str+1) = *(t +2);
    printf("%c ",*(str+1));

}