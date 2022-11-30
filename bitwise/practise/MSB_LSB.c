#include<stdio.h>
#define NUM_SIZE sizeof(int)*2
void lsb(int x)
{
	if(x&1)
		printf("LSB:1\n");
	else
		printf("LSB:0\n");
}
void msb(int x)
{
	if(x&(0x1<<(NUM_SIZE-1)))
		printf("MSB:1\n");
	else
		printf("MSB:0\n");
}
int main()
{
	int x,i;
	printf("Enter a num:");
	scanf("%d",&x);
	void (*fp[2])(int)={lsb,msb};
	fp[0](x);
	fp[1](x);
	
}
