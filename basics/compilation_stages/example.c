#include<stdio.h>
#include "header.h"
#define N 10
int main()
{
	printf("hello\n");
	printf("%d\n",N);
	//This line is commented 
	int a;
	a=N;
	printf("%d",a);
}

void fun()
{
	printf("This is fun\n");
}
