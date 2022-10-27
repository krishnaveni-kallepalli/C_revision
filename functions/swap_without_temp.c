#include<stdio.h>
int swap(int a,int b);
int main()
{
	int a,b,s;
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);
	swap(a,b);
}
int swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("%d %d",a,b);
}
