#include<stdio.h>
void fun(int a1,int b1)
{
	int temp;
	temp=a1;
	a1=b1;
	b1=temp;
}
int main()
{
	int a,b;
	printf("Enter a,b:");
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);
	fun(a,b);
	printf("%d %d",a,b);
	return 0;
}

