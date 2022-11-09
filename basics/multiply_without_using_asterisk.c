#include<stdio.h>
int main()
{
	int x,y,p=0;
	scanf("%d %d",&x,&y);
	
	while(y!=0)
	{
		p=p+x;
		y--;
	}
	printf("%d\n",p);
	
}
