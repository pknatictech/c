#include<stdio.h>
#include<stdlib.h>

int main() {
    FILE *fr, *fw;
    char ch;

    fr = fopen("sample.txt", "r");
    if (fr == NULL) {
        printf("Can not read the file!\n");
        exit(1);
    }

    fw = fopen("sample2.txt", "w");
    while (1) 
    {
        ch = fgetc(fr);
        if (ch == EOF)
            break;
        printf("%c", ch);
        // fputc(ch, fw); 
    }

    printf("\n");
    fclose(fr);
    fclose(fw);
    return 0;
}
