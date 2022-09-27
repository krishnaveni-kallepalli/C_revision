#include<stdio.h>
int main()
{
	const int a=4;
	int b=9;
	//a++;
	printf("%d\n	",a);
	const int *p=&b;
	b++;
	printf("%d\n",*p);
	p=&a;
	a++;
	printf("%d\n	",a);
	
}
