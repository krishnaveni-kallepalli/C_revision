#include<stdio.h>
void swap_array(int n,int *p,int *q)
{
	int i,temp[10];
	for(i=0;i<n;i++)
	{
		temp[i]=*(p+i);
		*(p+i)=*(q+i);
		*(q+i)=temp[i];
	}
}
int main()
{
	int a[10],b[10],i,n,*p,*q;
	p=a;
	q=b;
	printf("Enter no of elements:");
	scanf("%d",&n);
	
	printf("Enter elements into array a:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter elements into array b:\n");
	for(i=0;i<n;i++)
		scanf("%d",&b[i]);
	
	swap_array(n,p,q);
	
	printf("Array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",*(a+i));
	printf("\n");
	for(i=0;i<n;i++)
		printf("%d\t",*(b+i));
	printf("\n");
	return 0;
}

