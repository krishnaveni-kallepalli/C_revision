#include<stdio.h>
int main()
{
	char *ptr="C-Test%s";
	printf("%s\n",ptr);
	int x=3,y=2;
	int z=x++ + ++y - x--;
	printf("%d %d %d",x,y,z);
}
