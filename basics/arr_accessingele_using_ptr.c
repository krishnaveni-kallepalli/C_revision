#include<stdio.h>
void fun(int *p,int n)
{
	printf("Entered elements are:\n");
	for(int i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
}
int main()
{
	int i,n,a[10],*p;
	p=a;
	printf("Enter n:\n");
	scanf("%d",&n);
	printf("Enter elements into array:\n");
	void (*fp)(int *,int);
	fp=fun;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	fp(p,n);
}


