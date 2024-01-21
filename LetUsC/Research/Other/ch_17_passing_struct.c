/*Passing individual structure element*/
// #include<stdio.h>
// struct book
// {    
//     char name[10]; char author[10] ;int pages;
    
// };
// void display1(char *, char *, int);
// void display2(struct book);
// void display3(struct book *);
// int main()
// {
//  struct book b1 = {"Let us C","YPK",643};
//  display1(b1.name,b1.author,b1.pages);
//  display2(b1);
//  display3(&b1);

//     return 0;
// }
// void display1(char *n, char *a, int pg)
// {
//     printf("%s %s %d\n",n,a,pg);
// }
// void display2(struct book b)
// {
//     printf("%u %u %u\n",&b.name,&b.author,&b.pages);
// }
// void display3(struct book *pb)
// {
//     printf("%u %u %u",&pb->name,&pb->author,&pb->pages);
// }
#include<stdio.h>
struct student
{
    char name[6]; int roll; int phone;
};
void display1(char *, int, int );
void display2(struct student);
void display3(struct student *);
int main()
{
    struct student st = {"yanshi",21008,86307};
    display1( st.name,st.roll,st.phone);
    display2(st);
    display3(&st);
    return 0;
}
void display1(char *n, int r, int ph)
{
    printf("%s %d %d\n",n,r,ph);
}
void display2(struct student st)
{
    printf("%u %u %u",&st.name,&st.roll,&st.phone);
}
void display3(struct student *ps)
{
    printf("%u  %u %u",&ps->name,&ps->roll,&ps->phone);
}
