#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	printf("%d\n",a);
	int *p;
	p=&a;
	printf("%d\n",a);
	printf("%d\n",*p);
	
}


