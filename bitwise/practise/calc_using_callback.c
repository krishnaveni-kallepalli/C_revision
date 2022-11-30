#include<stdio.h>
void add(int a,int b)
{
	printf("add:%d\n",a+b);
}
void sub(int a,int b)
{
	printf("sub:%d\n",a-b);
}
void mul(int a,int b)
{
	printf("mul:%d\n",a*b);
}
void div(int a,int b)
{
	printf("div:%d\n",a/b);
}
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	void (*fp[4])(int,int)={add,sub,mul,div};
	fp[0](a,b);
	fp[1](a,b);
	fp[2](a,b);
	fp[3](a,b);
	
}
