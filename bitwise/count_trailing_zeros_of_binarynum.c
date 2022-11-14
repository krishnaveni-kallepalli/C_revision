
#include<stdio.h>
#define NUM_SIZE sizeof(int)*8
int main()
{
	int x,count=0,i;
	printf("Enter a number:\n");
	scanf("%d",&x);
	for(i=0;i<NUM_SIZE;i++)
	{
		if(x&1)
			break;
		else
		{
			count++;
			x=x>>1;
		}
	}
	if(count!=-1)
		printf("Zeros are %d\n",count);
	else
		printf("all bits are set\n");
		
	return 0;
}



/*  
	       ----
1111 1111 0011 0000
	       ----
Trailing 0's:4
  
---
0001 0110 1111 1110
---

Leading 0's : 4
*/


