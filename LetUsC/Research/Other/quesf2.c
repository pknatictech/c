/*Program to find the square of any number with function calling*/
// #include<stdio.h>
// void square(int num);
// int main()
// {
//     int num;
//     printf("Enter any number to find the square : ");
//     scanf("%d",&num);
//     square(num);

//     return 0;
// }
// void square(int num)
// {
//     printf("%d",num*num);
// }
#include <stdio.h>
int square(int num);
int main()
{
    int num, n;
    printf("Enter value to find the square : ");
    scanf("%d", &num);
    n = square(num);
    printf("%d %d", n, num);

    return 0;
}
int square(int num)
{
    int a;
    a = num*num;
    return a;
}