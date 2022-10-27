#include<stdio.h>
void fun(int n,int m,int a[n][m])
{
	int i,j;
	printf("Elements in array:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",*(*(a+i)+j));
		}
		printf("\n");
	}
}
int main()
{
	int i,j,n,m;
	printf("Enter size of array n,m:");
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n][m];
	int (*p)[n][m];
	p=&a;
	printf("Enter elements into array:");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",(p+i)+j);
	fun(n,m,a);
}
