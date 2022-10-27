#include<stdio.h>
void fun(int *p,int n)
{
	int i;
	printf("Elements in an array:\n");
	for(i=0;i<n;i++)
		printf("%d\n",*(p+i));
}
int main()
{
	int i,n;
	printf("Enter size of array:");
	scanf("%d",&n);
	int a[n];
	int *p;
	p=a;
	printf("Enter elements in an array:\n");
	for(i=0;i<n;i++)
	{
		printf("%p",p+i);
		scanf("%d",(p+i));
		}
	fun(p,n);
}
