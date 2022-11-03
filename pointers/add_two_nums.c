#include<stdio.h>
int main()
{
	int a,b,*p,*q;
	p=&a;
	q=&b;
	printf("Enter a,b:\n");
	scanf("%d %d",&a,&b);
	printf("Result:%d\n",*p+*q);
}
