#include<stdio.h>
void fun(int x)
{
	printf("%d\n",x);
	printf("Hello\n");
}
void func(void (*fp)(int ))
{
	(*fp)(14);
}
int main()
{
	int x;
	void (*fp)(int) = fun; 
	func(fp);
}
