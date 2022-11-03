#include<stdio.h>
int main()
{
	int a[10];
	int *p,i,n;
	p=a;

	printf("Enter no of elements in an array:\n");
	scanf("%d",&n);
	
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		
	printf("Array elements are:\n");
	for(i=0;i<n;i++)
		printf("%d\t",*(p+i));
	printf("\n");
	
	return 0;
}
