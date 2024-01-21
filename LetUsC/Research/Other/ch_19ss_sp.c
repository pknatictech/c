#include<stdio.h>
int main()
{
    FILE *dt;
    struct detail
    {
       char name[20];
       int number;
    };
    struct detail d;
    dt = fopen("detail.txt","w");
    for(int i=0; i<=3; i++)
    {
        printf("Enter the name and mobile number ");
        scanf("%s %d",d.name,&d.number);

        fprintf(dt,"%s %d\n",d.name,d.number);

        getchar();
    }
    fclose(dt);
    dt = fopen("detail.txt","r");
while (fscanf(dt,"%s %d",d.name,&d.number)!=EOF)
   printf("%s %d\n",d.name,d.number);
fclose(dt);

    return 0;
}
