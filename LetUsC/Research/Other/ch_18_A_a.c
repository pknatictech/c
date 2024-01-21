//(a)// #include<stdio.h>
// #include<ctype.h>
// int main()
// {
// char ch;
// ch = getchar();
// if(islower(ch))

// putchar(tolower(ch));

// else

// putchar(tolower(ch));
//     return 0;
// }


//(b) // #include<stdio.h>
// int main()
// {
// int i = 2;
// float f = 2.5367;
// char str[] = "Life is like that";
// printf("%4d\t%3.3f\t%4s\n",i,f,str);
//     return 0;
// }

// (c)
// #include<stdio.h>
// int main()
// {
// printf("More often than \b\b not \rthe person who \ wins is the one who thinks he can!\n");
//     return 0;
// }

(d)
#include<stdio.h>
char p[] = "The sixth sick sheikh's sixth ship is sick";

int main()
{
 int i = 0;

  while(p[i]!='\0')
  {
    putchar(p[i]);
    i++;
  }
    return 0;
}