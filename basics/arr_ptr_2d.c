#include<stdio.h>
void fun(int a[10][10],int i,int j,int n,int m)
{
	printf("Entered elements are:\n");
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
	int i,j,n,m,a[10][10];
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("Enter m:\n");
	scanf("%d",&m);
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	fun(a,i,j,n,m);	
}
