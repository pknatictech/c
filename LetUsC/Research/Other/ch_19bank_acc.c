#include<stdio.h>
int main()
{
FILE *ba;
struct cus
{
    char name[40]; int acc; float cash;
};
struct cus c;
char ch = 'Y';
ba = fopen("Account_info.txt","w");
while(ch == 'Y' || ch == 'y')
{
    printf("Enter the name, acc, cash ");
    scanf("%s %d %f",c.name,&c.acc,&c.cash);

    fprintf(ba,"%s %d %f",c.name,&c.acc,&c.cash);

 getchar();
 printf("Another Record: ");
 ch = getchar();
}
fclose(ba);
ba = fopen("Account_info.txt","r");
while (fscanf(ba,"%s %d %f\n",c.name,&c.acc,&c.cash)!=EOF)
   printf("%s %d %.2f\n",c.name,c.acc,c.cash);
fclose(ba);


    return 0;
}