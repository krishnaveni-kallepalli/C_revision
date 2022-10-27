#include<stdio.h>
#define BITS sizeof(int)*8
int main()
{
	int x,msb;
	printf("Enter number:\n");
	scanf("%d",&x);
	if(x&1)
		printf("Set(1)\n");
	else
		printf("Notset(0)\n");
}
