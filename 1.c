#include<stdio.h>
#define SIZE 2
int sum(int,int);
int sub(int,int);
void check(int);
void display(int);
int c;
int main()
{
	int arr[SIZE],i,ch;
	printf("Enter elements into array:");
	for(i=0;i<SIZE;i++)
		scanf("%d",&arr[i]);

	int a,b;
	printf("Enter a,b values:");
	scanf("%d %d",&a,&b);
	
	printf("Enter choice:\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 2:
			sum(a,b);
			check(c);
			display(c);
			break;
		case 1:
			sub(a,b);
			check(c);
			display(c);
			break;
		default:
			printf(":(");
	}
	
}
int sum(int a,int b)
{
	c=a+b;
	return c;
}
int sub(int a,int b)
{
	c=a-b;
	return c;
}

void check(int c)
{
	if(c%2==0)
		printf("%d is even\n",c);
	else
		printf("%d is odd\n",c);
}
void display(int c)
{
	printf("Result:%d\n",c);
}

