#include<stdio.h>
void mul(int x,int y)
{
	int p=0;
	while(y!=0)
	{
		p=p+x;
		y--;
	}
	printf("%d\n",p);
}
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	
	void (*fp)(int,int)=mul;
	fp(x,y);
	
}
