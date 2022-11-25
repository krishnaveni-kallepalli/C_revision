#include<stdio.h>
void bintodec(int n)
{
	int r,d=0,i,j,b=1;
	while(n>0)
	{
		r = n%10;
		d = d+r*b;
		n=n/10;
		b=b*2;
	}
	printf("Result:%d\n",d);
}
int main()
{
	int n;
	printf("Enter number :");
	scanf("%d",&n);
	void (*fp)(int)=bintodec;
	bintodec(n);
	return 0;
}
