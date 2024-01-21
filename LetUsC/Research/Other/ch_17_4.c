#include<stdio.h>
int main()
{
struct book
{
    char name[10];
    float price;
    int pages;
};
 struct book a[3];
 for(int i=0;i<=2;i++)
 {
  printf("Enter the name, price,pages ");
  scanf("%s %f %d",&a[i].name,&a[i].price,&a[i].pages);
  printf("%s %f %d\n",a[i].name,a[i].price,a[i].pages);
//   scanf("%s %f %d",&a2.name,&a2.price,&a2.pages);
//   printf("%s %f %d",a2.name,a2.price,a2.pages);
//   scanf("%s %f %d",&a3.name,&a3.price,&a3.pages);
//   printf("%s %f %d",a3.name,a3.price,a3.pages);
}
    return 0;
}