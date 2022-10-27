#include<stdio.h>
int main()
{
	int x,p;
	printf("Enter number:\n");
	scanf("%d",&x);
	printf("Enter position:\n");
	scanf("%d",&p);
	x^=(0x1<<p);
	printf("Result:%d\n",x);
}
