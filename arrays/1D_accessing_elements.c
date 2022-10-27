#include<stdio.h>
int main()
{


/*
	int a[5]={1,2,4,6,7};
	int i;
	for(i=0;i<5;i++)
		printf("%d\n",a[i]);
*/

	int i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements in an array:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Elements in an array:");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
