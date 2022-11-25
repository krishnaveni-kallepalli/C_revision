#include<stdio.h>
//#pragma pack(2)
struct node
{
	int a;
	char c;
	double d;
};
int main()
{
	struct node *p;
	printf("%ld",sizeof(p));
}
