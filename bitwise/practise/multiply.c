#include<stdio.h>
void multiply(int x,int y)
{
	int p=0;
	while(y!=0)
	{
		p=p+x;
		y--;
	}
	printf("Result:%d\n",p);
}
void mul(int x,int y)
{
	int p=0;
	while(y>0)
	{
		if((y&1)!=0)
			p=p+x;
		x=x<<1;
		y=y>>1;
	}
	printf("Result:%d\n",p);
}
int main()
{
	int x,y;
	printf("Enter x,y:");
	scanf("%d %d",&x,&y);/*
	void (*fp)(int ,int)=multiply;
	fp(x,y);*/
	void (*fp[2])(int,int)={multiply,mul};
	fp[0](x,y);
	fp[1](x,y);
}
