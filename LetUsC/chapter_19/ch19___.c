/*

Create a app to store data and rewrite it and read it.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    FILE *fp;
    char str[80];
    int option;
    while (1)
    {
        printf("Choose Any Option : \n");
        printf("1.Write content in file.\n");
        printf("2.Read File Data\n");
        printf("3.Close program\n");
        scanf("%d", &option);
        getchar();
        switch (option)
        {
        case 1:
            fp = fopen("ch19__.txt", "w");
            printf("Enter some lines of text: \n");
            while (strlen(gets(str)) > 0)
            {
                fputs(str, fp);
                fputs("\n", fp);
            }
            fclose(fp);
            break;
        case 2:
            printf("\nData in file:-\n\n");
            fp = fopen("ch19__.txt", "r");
            if (fp == NULL)
            {
                puts("Cannot open file.");
                exit(2);
            }
            while (fgets(str, sizeof(str), fp) != NULL)
            {
                printf("%s", str);
            }
            fclose(fp);
            printf("\n\n");
            break;
        case 3:
            exit(1);
        }
    }
    return 0;
}