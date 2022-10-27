#include<stdio.h>
void fun();
int main()
{
	register int x;
	scanf("%d",&x);
	printf("%d\n",x);
}
void fun()
{
	printf("%d\n",x);
}
