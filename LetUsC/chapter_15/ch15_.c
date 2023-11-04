/* Write a program to check the length of the string by string function and user define function. */
#include<stdio.h>
#include<string.h>
int stringlen(char *);
int main()
{
    char str1[] = "This is a string";
    char str2[] = "This is another string";
    printf("%d",strlen(str1));
    int x = stringlen(str2);
    printf("\n%d",x);
    return 0;
}
int stringlen(char *a)
{
    int count = 0,i=0;
    char n;
    while(n!='\0')
    {
        n = *(a + i);
        i++;
        count++;
    }
    return (count);
}