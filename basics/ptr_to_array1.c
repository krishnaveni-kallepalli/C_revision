#include<stdio.h>
#define N 5
int main()
{
	int a[N]={1,2,3,4,5};
	int (*p)[N];
	p=&a;
	printf("p = %p\n", p);
	p++;
	printf("p = %p\n", p);
}
