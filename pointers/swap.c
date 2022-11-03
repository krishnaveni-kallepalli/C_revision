#include<stdio.h>
void swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
int main()
{
	int a,b,*p,*q;
	printf("Enter a,b:\n");
	scanf("%d %d",&a,&b);
	p=&a;
	q=&b;
	swap(p,q);
	printf("%d %d",*p,*q);
	return 0;
}
