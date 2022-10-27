#include<stdio.h>
int main()
{
	int i,j,k,n,m,p;
	printf("Enter size of array n,m,p:");
	scanf("%d %d %d",&n,&m,&p);
	int a[n][m][p];
	printf("Enter elements into array:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<p;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("Elements in array:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<p;k++)
			{
				printf("%d\t",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
