#include<stdio.h>
#define N 10
void fun(void);
void func1(int a);
int func2();
int func3(int b);
int main()
{
	int a,b;
	fun();
	func1(a);
	int x = func2();
	printf("%d\n",x);
	int y = func3(b);
	printf("%d\n",y);
}
void fun(void)//fun with no args no ret
{
	printf("%d\n",N);
}
void func1(int a)//fun with args no ret val
{
	printf("%d\n",a);
}
int func2()// func with ret val but no args 
{
	return N;
}
int func3(int b)//fun with args and ret val
{
	return b;
}
