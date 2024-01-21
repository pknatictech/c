
#include <stdio.h>
#include <string.h>
int h = 1;
struct engineparts
{
  char serialno[4];
  int yearofmanufacture;
  char material[20];
  int quantity;
};
void automobiledetail(struct engineparts *t)
{
  printf("\nEnter details of part no. %d\n", h);
  printf("Enter the serial number : ");
  scanf("%s", t->serialno);
  getchar();
  printf("Enter Material name : ");
  scanf("%s", t->material);
  printf("Enter the Quantity : ");
  scanf("%d", &t->quantity);
  printf("Enter the year of MFY : ");
  scanf("%d", &t->yearofmanufacture);
  h++;
}
void printdetail(struct engineparts *s)
{
  printf("Serial Number = \t%s\n", s->serialno);
  printf("Material Name = \t%s\n", s->material);
  printf("Material Quantity = \t%d\n", s->quantity);
  printf("Manufacturing Year = \t%d\n\n", s->yearofmanufacture); 
}
void record(struct engineparts *s)
{
  int found = 0;
  int t;
  printf("Records of BB1 to CC6\n");
  for (int i = 0; i < 5; i++)
  {
    if (strcmp(s[i].serialno, "BB1") == 0)
    {
      found = 1;
      printdetail(&s[i]);
    }
    else if (strcmp(s[i].serialno, "CC6") == 0)
    {
      found = 0;
      printdetail(&s[i]);
    }
    else if (found == 1)
    {
      
      printdetail(&s[i]);
    }
  }
}

int main()
{
  struct engineparts e[5];
  struct engineparts *t;
  for (int i = 0; i <= 4; i++)
  {
    t = &e[i];
    automobiledetail(t);
  }
  record(e);
  return 0;
}
