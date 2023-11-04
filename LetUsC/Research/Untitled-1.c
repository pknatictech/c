#include<stdio.h>
#define PRODUCT(x) (x*x)
int main()
{
	int i=1,j,k,l;
    // printf("%d\n",i);
	j=PRODUCT(1+1);
	k=PRODUCT(i++);
	l=PRODUCT(++i);
	printf("%d\n",j);
	printf("%d\n",k);
	printf("%d\n",l);
	return 0;
}

// #include<stdio.h>
// int main()
// {
// 	int arr[5],i;
// 	for(i=0;i<=6;i++)
// 	{
// 		printf("Enter data ");
// 		scanf("%d",&arr[i]);
// 	}
// 	for(i=0;i<=7;i++)
// 	{
// 		printf("%d\n",arr[i]);
// 	}
// 	return 0;
// }