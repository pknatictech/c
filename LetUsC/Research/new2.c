#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int n;
    char str[80];
    while (1)

    {
        FILE *p;
        printf("1.To writing the file:\n");
        printf("2.To reading the file:\n");
        printf("3.To both reading and writing the file:\n");
        printf("4.To write the file:\n");
        printf("5.To Append the file:\n");
        // printf("6.To write the file:\n");
        // printf("7.To write the file:\n");
        printf("\n");
        printf("Choose any option:");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            getchar();
            printf("Enter your data here:\n");
            p = fopen("xyz.txt", "w");
            // scanf("%s",str);
            // fputs(str, p);
            while (strlen(gets(str)) > 0)
            {
                fputs(str, p);
                fputs("\n", p);
            }
            fclose(p);
            break;

        case 2:
            p = fopen("xyz.txt", "r"); // here "r" is for only reading
            // fgets(str, sizeof(str), p);
            while (fgets(str, sizeof(str), p) != NULL)
            {
                printf("%s", str);
            }
            fclose(p);
            break;

        case 3:
            getchar();
            p = fopen("xyz.txt", "r+"); // here "r" is for reading and writting both but it modified existing content.
            if (p == NULL)
            {
                printf("Error");
                exit(1);
            }
            while (strlen(gets(str)) > 0)
            {
                fputs(str, p);
                fputs("\n", p);
            }

            printf("your modification is successful\n");

            fclose(p);

            break;

        case 4:
            getchar();
            p = fopen("xyz.txt", "w+"); // Here "w+"is for reading and writing both but it erase the previous content.
            if (p == NULL)
            {
                printf("File cannot open");
                exit(1);
            }
            while (strlen(gets(str)) > 0)
            {
                fputs(str, p);
                fputs("\n", p);
            }

            fclose(p);
            break;
        case 5:
            p = fopen("xyz.txt", "a");
            if (p == NULL)
            {
                printf("File cannot open");
                exit(1);
            }
            printf("Enter your content here:");

            fprintf(p, "\n%s", str);
            printf("Your appending is successfully create");
            fclose(p);

        case 6:

            exit(1);
        }
    }

    return 0;
}

// 1 2 3 4 = 7
// 1 2 3 4 = 4*4 = 16