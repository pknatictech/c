#include <stdio.h>
#define MAX 100
struct books
{
    int assisno;
    char name[30];
    char authname[20];
    int price;
    int flag;
};
void printing(struct books *n);
int main()
{
    int i;
    struct books book[2] = {{10, "The rich dad poor dad", "Robert kiosaki", 100, 0}, {20, "Think And grow rich", "Robert kiosaki", 200, 0}};
    for (i = 0; i < 2; i++)
    {
        if (book[i].price == 100)
        {
            printing(&book[i]);
        }
    }

    return 0;
}
void printing(struct books *n)
{
    printf("Name of the books = %s\n", n->name);
    printf("Access number of the books = %d\n", n->assisno);
}