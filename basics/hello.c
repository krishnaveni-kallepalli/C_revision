#include<stdio.h>
#define N 9
void func1(void);
int fun(int a, int b)
{
	return a+b; 
}
int main()
{
	/*
	printf("%d\n",N);
	printf("HEllo world\n");
	#ifdef N
	printf("True\n");
	#else
	printf("False\n");
	#endif
	N<10?printf("True"):printf("False");
	*/
	int a;
	a=(1,2,3);
	int b=99;
	printf("\n%d\n",a);
	int c = fun(a,b);
	printf("%d\n",c);
}
void func(void)
{
	printf("%d\n",N);
}
