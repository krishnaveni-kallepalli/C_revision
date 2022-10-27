#include<stdio.h>
int main()
{
	int i,j,n,m;
	printf("Enter size of array n,m:");
	scanf("%d",&n);
	scanf("%d",&m);
	int a[n][m];
	printf("Enter elements into array:");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	printf("Elements in array:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
