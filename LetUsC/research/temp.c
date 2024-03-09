#include <stdio.h>
int main()
{
    int array[10];
    int sum = 0, i;
    printf("Enter the 10 number : ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
    for (i = 0; i < 10; i++)
    {
        sum += array[i];
    }
    printf("Sum = %d", sum);
    return 0;
}