#include<stdio.h>
void sum(int x,int y)
{
	printf("Sum:%d\n",x+y);
}
void sub(int x,int y)
{
	printf("Sub:%d\n",x-y);
}
void mul(int x,int y)
{
	printf("mul:%d\n",x*y);
}
void div(int x,int y)
{
	printf("Div:%d\n",x/y);
}
void func(void (*fp[4])(int,int))
{
	int x,y;
	scanf("%d %d",&x,&y);
	(*fp[0])(x,y);
	(*fp[1])(x,y);
	(*fp[2])(x,y);
	(*fp[3])(x,y);
}
int main()
{
	void (*fp[4])(int,int) = {sum,sub,mul,div};
	func(fp);
}
