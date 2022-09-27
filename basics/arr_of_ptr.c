#include<stdio.h>
#define n 5
int main()
{
	int a[n]={1,2,3,4,5};
	int *p[n],i;
	for(i=0;i<n;i++)
	{
		//p[i]=&a[i];
		p[i]=a+i;
	}
	for(i=0;i<n;i++)
	{
		printf("%p %d\n",p[i],*p[i]);	
	}
}
