/*
#include<stdio.h>
int main()
{
	int a=10;
	printf("%d %d %d %d",++a,a++,++a,++a);
}
*/

#include<stdio.h>
#define FUN FUN1

void FUN1(void)
{
	printf("function");
}
int main()
{
	FUN();
}
