#include<stdio.h>
#define NUM_SIZE sizeof(int)*8
int main()
{
	int x;
	scanf("%d",&x);
	
	x|=((x&0xff)<<24);
	
	printf("%d",x);
}




