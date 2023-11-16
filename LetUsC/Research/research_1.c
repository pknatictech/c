// // 7 7 7 7 7 7 7 7 7 7 7 7 7
// // 7 6 6 6 6 6 6 6 6 6 6 6 7
// // 7 6 5 5 5 5 5 5 5 5 5 6 7
// // 7 6 5 4 4 4 4 4 4 4 5 6 7
// // 7 6 5 4 3 3 3 3 3 4 5 6 7
// // 7 6 5 4 3 2 2 2 3 4 5 6 7
// // 7 6 5 4 3 2 1 2 3 4 5 6 7
// // 7 6 5 4 3 2 2 2 3 4 5 6 7
// // 7 6 5 4 3 3 3 3 3 4 5 6 7
// // 7 6 5 4 4 4 4 4 4 4 5 6 7
// // 7 6 5 5 5 5 5 5 5 5 5 6 7
// // 7 6 6 6 6 6 6 6 6 6 6 6 7
// // 7 7 7 7 7 7 7 7 7 7 7 7 7
// #include<stdio.h>
// int main()
// {

//     int i,j;
//     int n=7,p=n;
//     // scanf("%d", &n);
//   	// Complete the code to print the pattern.
//     for(i=1;i<=n*2-1;i++)
//     {
//         for(j=1;j<=n*2-1;j++)
//         {
//             printf("%d ",p);
//         }
//         printf("\n");
//     }
//     return 0;
// }


#include<stdio.h>
int main()
{
    register int a;
    printf("%d",a);
    {
        printf("%d",a++);
        {
             int a=6;
            printf("%d",a);
        }
    }
    printf("%d",a);

    return 0;
}