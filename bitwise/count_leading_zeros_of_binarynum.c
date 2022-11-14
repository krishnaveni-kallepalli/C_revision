#include<stdio.h>
#define NUM_SIZE sizeof(int)*4
int main()
{
	int x,count=0,i,msb;
	printf("Enter a number:\n");
	scanf("%d",&x);
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
		
	return 0;
}

