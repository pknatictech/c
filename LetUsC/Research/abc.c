#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
// 5 5 5 5 5 5 5 5 5
// 5 4 4 4 4 4 4 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 2 1 2 3 4 5
// 5 4 3 2 2 2 3 4 5
// 5 4 3 3 3 3 3 4 5
// 5 4 4 4 4 4 4 4 5
// 5 5 5 5 5 5 5 5 5
int main()
{
    int n;
    scanf("%d", &n);
    int len = n;
    int value;
    for (int i = 1; i <= len; i++)
    {
        for (int j = 1; j < len; j++)
        {
            value = (i < j) ? i : j;
            value = n - value + 1;
            printf("%d ", value);
        }
        for (int j = n; j >= 1; j--)
        {
            value = (i < j) ? i : j;
            value = n - value + 1;
            printf("%d ", value);
        }
        printf("\n");
    }
    for (int i = 1; i < len; i++)
    {
        for (int j = 1; j < len; j++)
        {
            value = (j<i)?j:i;
            value = n - value - 1;
            printf("%d ",value);
        }
        // for (int j = n; j >=1; j--)
        // {
        //     value = (i < j) ? i : j;
        //     value = n - value + 1;
        //     printf("%d ", value);
        // }
        printf("\n");
    }
    return 0;
}
