#include<stdio.h>
#define BITS sizeof(int)*8
int main()
{
	int x,msb;
	printf("Enter number:\n");
	scanf("%d",&x);
	msb=0x1<<(BITS-1);
	if(x&msb)
		printf("Set(1)\n");
	else
		printf("Notset(0)\n");
}
