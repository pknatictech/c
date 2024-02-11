#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num = 0;
    int x, b;
    while (1)
    {
        printf("1. Initialize value.\n");
        printf("2. Add value.\n");
        printf("3. Subtract value.\n");
        printf("4. Print Number.\n");
        printf("5. Exit\n");
        printf("==> ");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            printf("Enter the number : ");
            scanf("%d", &num);
            break;
        case 2:
            printf("Enter the number to add : ");
            scanf("%d", &b);
            num = num + b;
            break;
        case 3:
            printf("Enter the number to subtract : ");
            scanf("%d", &b);
            num = num - b;
            break;
        case 4:
            printf("Current Number : %d\n", num);
            break;
        case 5:
            exit(1);
        }
    }
    return 0;
}