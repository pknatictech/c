#include<stdio.h>
int main()
{
FILE *fp;
struct emp
{
    char name[40]; int age; float bs;
};
struct emp e;
char ch ='Y';
fp = fopen("EMPLOYEE.DAT","w");
while (ch=='Y' || ch == 'y')
{
    printf("Enter the name, age, salary : ");
    scanf("%s %d %f",e.name,&e.age,&e.bs);
    if(e.bs > 10000)
    {
        e.bs = e.bs + 500;
    }
    fprintf(fp,"%s %d %.2f\n",e.name,e.age,e.bs);
    
    getchar();
    printf("Another Record: ");
    ch = fgetchar();
}
fclose(fp);
fp = fopen("EMPLOYEE.DAT","r");
while (fscanf(fp,"%s %d %f\n",e.name,&e.age,&e.bs)!=EOF)
   printf("%s %d %.2f\n",e.name,e.age,e.bs);
fclose(fp);

// ch = 'Y';
// fp =  fopen("EMP.DAT","wb");
// while(ch == 'Y')
// {
//     printf("Enter the name, age, salary :");
//     scanf("%s %d %f",e.name,&e.age,&e.bs);
//     fwrite(&e,sizeof(e),1,fp);
//     printf("Another Record: ");
//     ch= fgetchar();
// }
// fclose(fp);
// fp = fopen("EMP.DAT","rb");
// while (fread(&e,sizeof(e),1,fp)==1)
// printf("%s %d %f\n",e.name,e.age,e.bs);
// fclose(fp);
    return 0;
}