#include<stdio.h>
int main()
{
	int x;
	printf("Enter num:");
	scanf("%d",&x);
	x=((x&0x0F)<<4)|((x&0xF0)>>4);
	printf("Result:%d\n",x);
}
