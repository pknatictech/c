#include<stdio.h>
#include<stdlib.h>
void fun(int *x,long long int *y);
int main()
{
    int max,*a;
    long long int t;
    fun(&max,&t);
    *a = t;
    for(int i =0;i<max;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
void fun(int *x,long long int *y)
{
    static int arr[] = {3,5,6,4,45,564,65,56,56};
    int value;
    value= sizeof(arr)/sizeof(arr[0]);
    *x = value;
    y = arr;
}