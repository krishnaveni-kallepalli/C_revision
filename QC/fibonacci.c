#include<stdio.h>
/*
int main()
{
	int n,t1=0,t2=1;
	printf("Enter range:");
	scanf("%d",&n);
	printf("%d %d ",t1,t2);
	int next=t1+t2;
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ", next);
		t1=t2;
		t2=next;
		next=t1+t2;
	}
	return 0;
}
*/


/*
void fib(int t1,int t2,int n)
{
	printf("%d %d ",t1,t2);
	int next=t1+t2;
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ", next);
		t1=t2;
		t2=next;
		next=t1+t2;
	}
}

int main()
{
	int n,t1=0,t2=1;
	printf("Enter range:");
	scanf("%d",&n);
	void (*fp)(int,int,int)=fib;
	fp(t1,t2,n);
}
*/

int fib(int n)
{
	if(n == 0)
		return 0;
	else if(n == 1) 
		return 1;
	else
		return fib(n-1)+fib(n-2);
}
int main()
{
	int i,n;
	printf("Enter range:");
	scanf("%d",&n);
	int (*fp)(int n)=fib;
	for(i=0;i<n;i++)
		printf("%d",fp(n));
	return 0;
}









