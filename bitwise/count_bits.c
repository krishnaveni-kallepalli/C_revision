#include<stdio.h>
void countbits(int a,int b)
{
	int count=0,res;
	res=a^b;
	while(res>0)
	{
		count++;
		res = res & (res - 1);
	}
	printf("%d",count);
}
int main()
{
	int a,b,count=0,res;
	printf("ENter number:\n");
	scanf("%d %d",&a,&b);
	void (*fp)(int,int)=countbits;
	fp(a,b);
}
