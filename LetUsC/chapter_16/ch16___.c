/* 
Write a program to reverse the strings stored in an array of pointer to strings.
*/
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char *all[] = {
//         "human",
//         "But To really mess things up.",
//         "One need to know c."
//     };
//     char temp[100];
//     char t;
//     int i,len,j,k;
//     for(i=0;i<sizeof(all)/sizeof(all[0]);i++)
//     {   
//         len = strlen(all[i]);
//         k = len - 1;
//         for(j=0;j<len/2;j++)
//         {
//             t = all[i][j];
//             all[i][j] = all[i][k-j];
//             all[i][k-j] = t;
//         }
//     }
//     for(i=0;i<sizeof(all)/sizeof(all[0]);i++)
//     {
//         printf("%s\n",all[i]);
//     }
//     return 0;
// }
#include <stdio.h>
#include <string.h>

int main() {
    char *all[] = {"human","But To really mess things up.","One need to know c."};

    char t;
    int i, len, j, k;
    char *x;
    for (i = 0; i < sizeof(all) / sizeof(all[0]); i++) {
        len = strlen(all[i]);
        k = len - 1;
        x = all[i];
        for (j = 0; j < len / 2; j++, k--) {
            t = *(x+j);
            *(x+j) = *(x+k);
            *(x+k) = t;
        }
    }

    for (i = 0; i < sizeof(all) / sizeof(all[0]); i++) {
        printf("%s\n", all[i]);
    }
    return 0;
}

