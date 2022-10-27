#include<stdio.h>
#define NUM_SIZE sizeof(int)*8
int main()
{
	int x,count=-1,i;
	printf("Enter a number:\n");
	scanf("%d",&x);
	for(i=0;i<NUM_SIZE;i++)
	{
		if((x>>i)&1)
			count = i;
	}
	if(count!=-1)
		printf("Highest order bit is %d\n",count);
	else
		printf("none of the bits is set\n");
		
	return 0;
}


/*  0010 0011 0000
      ^     ^
      |     | Lowest
      |
      Highest
  
*/
