// 7 7 7 7 7 7 7 7 7 7 7 7 7
// 7 6 6 6 6 6 6 6 6 6 6 6 7
// 7 6 5 5 5 5 5 5 5 5 5 6 7
// 7 6 5 4 4 4 4 4 4 4 5 6 7
// 7 6 5 4 3 3 3 3 3 4 5 6 7
// 7 6 5 4 3 2 2 2 3 4 5 6 7
// 7 6 5 4 3 2 1 2 3 4 5 6 7
// 7 6 5 4 3 2 2 2 3 4 5 6 7
// 7 6 5 4 3 3 3 3 3 4 5 6 7
// 7 6 5 4 4 4 4 4 4 4 5 6 7
// 7 6 5 5 5 5 5 5 5 5 5 6 7
// 7 6 6 6 6 6 6 6 6 6 6 6 7
// 7 7 7 7 7 7 7 7 7 7 7 7 7
#include <stdio.h>

void printPattern(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int min = (i < j) ? i : j;
            int value = n - min + 1;
            printf("%d ", value);
        }
        for (int j = n - 1; j >= 1; j--) {
            int min = (i < j) ? i : j;
            int value = n - min + 1;
            printf("%d ", value);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printPattern(n);
    return 0;
}
