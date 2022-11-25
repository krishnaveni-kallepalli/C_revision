#include<stdio.h>
int main()
{
	int x,p;
	printf("Enter number:\n");
	scanf("%d",&x);
	printf("Enter position:\n");
	scanf("%d",&p);
	(x&(1<<p))?printf("1\n"):printf("0\n");
}
