#include<stdio.h>
void fun(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int a,b;
	printf("Enter a,b:");
	scanf("%d %d",&a,&b);
	printf("%d %d\n",a,b);
	fun(&a,&b);
	printf("%d %d",a,b);
	return 0;
}

