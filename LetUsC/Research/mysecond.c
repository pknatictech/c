#include<stdio.h>
int fun(int *x,int *y,int *z);
int main()
{
    int j,k,l,m;
    j = 2;
    k = 3;
    l = 4;
    m = fun(&j,&k,&l);
    printf("%d\n",j);
    printf("%d\n",l);
    return 0;
}
int fun(int *x,int *y,int *z)
{
    printf("%ls\n",x);
    *x = 9;
    printf("%d\n",*x); 
    *z = 7;
    return 0;

}