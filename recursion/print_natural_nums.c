#include<stdio.h>
void natural_nums(int n)
{
	if(n!=0)
	{
		natural_nums(n-1);
		printf("%d\n",n);
	}
}


int main()
{
	int n,r;
	printf("Enter n:\n");
	scanf("%d",&n);
	natural_nums(n);
	return 0;
}
