#include<stdio.h>
void sum(int x,int y)
{
	printf("Sum:%d\n",x+y);
}
void func(void (*fp)(int,int))
{
	(*fp)(2,3);
}
int main()
{
	void (*fp)(int,int) = sum;
	func(fp);
}
