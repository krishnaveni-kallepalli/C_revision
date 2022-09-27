/*
const volatile int num;

where num may be modifiable by hardware, but cannot be assigned to, incremented, or decremented.

*/

#include<stdio.h>
int main()
{
	const volatile int num;
	num =90;
	printf("%d",num);
	num++;
	printf("%d",num);
}
