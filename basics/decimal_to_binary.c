#include<stdio.h>
#define NUM_SIZE sizeof(int)*2
void dectobin(int n)
{
	int i,j,a[10];
	for(i=0;n>0;i++)
	{
		a[i] = n%2;
		n=n/2;
	}
	for(j=i-1;j>=0;j--)
		printf("%d",a[j]);
	printf("\n");
}
int main()
{
	int n,a[10],i,j;
	printf("Enter number :");
	scanf("%d",&n);
	/*
	for(i=0;n>0;i++)
	{
		a[i]=n%2;
		n=n/2;
	}
	for(j=i-1;j>=0;j--)
	{	
		printf("%d",a[j]);
	}
	printf("\n");
	*/
	void (*fp)(int) = dectobin;
	fp(n);
	return 0;
}
