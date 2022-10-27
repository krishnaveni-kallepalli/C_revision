#include<stdio.h>
int main()
{
	int a[2][3]={1,2,3,4};
	int i,j,x;
	
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter element to delete:\n");
	scanf("%d",&x);
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			if(a[i][j]==x)
			{
				//a[i][j]=0;
				a[i][j]=a[i][j];
			}
		}
	}
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
}
