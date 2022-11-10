#include<stdio.h>
#define NUM_SIZE sizeof(int)*8
void leading(int x)
{
	int count=0,i,msb;
	msb=1<<(NUM_SIZE-1);
	for(i=0;i<NUM_SIZE;i++)
	{
		if((x<<i)&msb)
		{
			break;
		}
		count++;
	}
	if(count!=-1)
		printf("Zeros are %d\n",count);
	else
		printf("all bits are set\n");
}
int main()
{
	int x;
	printf("Enter a number:\n");
	scanf("%d",&x);
	void (*fp)(int)=leading;
	fp(x);
		
	return 0;
}

