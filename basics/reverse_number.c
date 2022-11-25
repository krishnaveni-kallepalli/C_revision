#include<stdio.h>
void rev(int n)
{
	int r=0;
	while(n!=0)
	{
		r = r*10+n%10;
		n=n/10;
	}
	printf("%d",r);
}
int main()
{
	int n;
	printf("Enter num: ");
	scanf("%d",&n);
	void (*fp)(int)=rev;
	fp(n);
}
