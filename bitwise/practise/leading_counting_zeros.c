#include<stdio.h>
#define NUM_SIZE sizeof(int)*2
void leading(int x)
{
	int i,count=0,msb=(0x1<<(NUM_SIZE-1)); 
	for(i=0;i<NUM_SIZE;i++)
	{
		if((x<<i)&msb) break;
		count++;	
	}
	printf("Leading zeros:%d\n",count);
}
void trailing(int x)
{
	int i,count=0;
	for(i=0;i<NUM_SIZE;i++)
	{
		if(x&1) break;
		else
		{
			count++;
			x=x>>1;
		}	
	}
	printf("Trailing Zeros:%d\n",count);		
}
int main()
{
	int i,j,x,count=0,msb;
	printf("Enter  a num:");
	scanf("%d",&x);
	void (*fp[2])(int)={leading,trailing};
	fp[0](x);
	fp[1](x); 	
}
