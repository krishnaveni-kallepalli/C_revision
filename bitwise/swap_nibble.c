#include<stdio.h>
void nibbleswap(int x)
{
	x = ((x & 0x0F)<<4)|((x & 0xF0)>>4);
	printf("%d\n",x);
}
int main()
{
	int num;
	scanf("%d",&num);
	nibbleswap(num);
	return 0; 
}
