/*
Transposing rows and col of a 2D array
*/
#include<stdio.h>
int main()
{
	int a[10][10],i,j,r,c;
	printf("Enter no of rows and cols:");
	scanf("%d %d",&r,&c);
	
	printf("Enter elements into array:");
	for(i=0;i<r;i++)
		for(j=0;j<c;j++)
			scanf("%d",&a[i][j]);
	printf("Enter elements are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("After transposing elements in array are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
