#include<stdio.h>
#include<stdlib.h>
void even(int start,int end);
void odd(int start,int end);
int main()
{
	int start,end,ch;
	printf("Enter range[start,end]:\n");
	scanf("%d %d",&start,&end);
	printf("Enter choice:\n1.even\n2.odd\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Even numbers in given range are:\n");
			even(start,end);
			break;
		case 2:
			printf("Odd numbers in given range are:\n");
			odd(start,end);
			break;
		default:
			exit(0);
	}
	
	return 0;
}
void even(int start,int end)
{
	if(start%2==0)
	{
		even(start+1,end);
		printf("%d\n",start);
	}
}
void odd(int start,int end)
{
	if(start%2!=0)
	{
		odd(start+1,end);
		printf("%d\n",start);
	}
}

