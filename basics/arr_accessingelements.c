#include<stdio.h>
int main()
{
	/*
	int a[10]={1,2,3,4,5,6,7,8,9,0};
	int i
	for(i=0;i<10;i++)
	{
		printf("%d\n",a[i]);
	}
	*/
	//1D array
	/*
	int i,n,a[10];
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Entered elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	*/
	
	//2D array
	/*
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
	printf("Entered elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	*/
	
	//3D array
	
	int i,j,k,n,m,l,a[10][10][10];
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("Enter m:\n");
	scanf("%d",&m);
	printf("Enter l:\n");
	scanf("%d",&l);
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<l;k++)
			{
				scanf("%d",&a[i][j][k]);
			}
		}
	}
	printf("Entered elements are:\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			for(k=0;k<l;k++)
			{
				printf("%d\t",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}


