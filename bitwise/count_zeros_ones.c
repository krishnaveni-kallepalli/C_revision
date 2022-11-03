#include<stdio.h>
#define NUM_SIZE sizeof(int)*8
int main()
{
	int x,i,zero=0,one=0;
	printf("Enter number:\n");
	scanf("%d",&x);
	for(i=0;i<NUM_SIZE;i++)
	{
		if(x&1)
			one++;
		else
			zero++;
		x=x>>1;
	}
	printf("Zeros: %d\nOnes: %d\n",zero,one);
	return 0;
}
