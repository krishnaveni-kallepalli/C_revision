#include<stdio.h>
#define NUM_SIZE sizeof(int)*8
void left_rotate(int x,int r)
{
	int msb;
	r = r%NUM_SIZE;
	while(r!=0)
	{
		r--;
		msb=(x >> NUM_SIZE)&1;
		x = (x << 1)|msb;
	}
	printf("%d\n",x);
}

void right_rotate(int x,int r)
{
	int lsb;
	r = r%NUM_SIZE;
	lsb=x&1;
	while(r!=0)
	{
		r--;
		x = (x >> 1) & (~(1 << NUM_SIZE));
		x = x | (lsb << NUM_SIZE);
	}
	printf("%d\n",x);
}

int main()
{
	int x,r;
	printf("Enter number:\n");
	scanf("%d",&x);
	printf("Enter no of rotations:\n");
	scanf("%d",&r);
	left_rotate(x,r);
	right_rotate(x,r);
}
