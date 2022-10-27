#include<stdio.h>
void fun();
static int y;
int main()
{
	static int x;
	printf("%d\n",x);
	printf("%d\n",y);
}
void fun()
{
	printf("%d\n",x);
	printf("%d\n",y);
}
