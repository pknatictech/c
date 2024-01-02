#include <stdio.h>
#include <string.h>
void removevovel(char str[]);
int main()
{
    char str[80] = "Oh, and yes, you can effortlessly use these tools without typing co";
    printf("Original String = \n%s\n\n", str);
    removevovel(str);
    return 0;
}
void removevovel(char str[])
{
    int i, len, j;
    len = strlen(str);
    // printf("Length = %d",len);
    for (i = i; i < len; i++)
    {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                for(j=i;j<len;j++)
                {
                    str[i] = str[i + 1];
                }
                len--;
            }

    }
    printf("After convert = \n%s", str);
}