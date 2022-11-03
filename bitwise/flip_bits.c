#include<stdio.h>
#define NUM_SIZE sizeof(int)*8
int main()
{
	int x,count=-1,i;
	printf("Enter a number:\n");
	scanf("%d",&x);
	x=~x;
	printf("%d",x);
	return 0;
}

