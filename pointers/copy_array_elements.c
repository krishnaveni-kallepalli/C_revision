#include<stdio.h>
void copy_elements(int n,int *p,int *q)
{
	int i;
	for(i=0;i<n;i++)
		*(q+i)=*(p+i);
}
int main()
{
	int a[10],b[10],i,n,*p,*q;
	p=a;
	q=b;
	printf("Enter no of elements:");
	scanf("%d",&n);
	
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	copy_elements(n,p,q);
	
	printf("Array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",*(b+i));
	printf("\n");
}

