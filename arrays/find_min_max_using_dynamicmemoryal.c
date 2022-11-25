//Finding maximum and minimum number in an array using dynamic memory allocation
#include<stdio.h>
#include<stdlib.h>
void min_max(int *p,int min,int max,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(*(p+i) > max)
			max = *(p+i);
		if(*(p+i) < min)
			min = *(p+i);
	}
	printf("Min:%d Max:%d\n",min,max);
	
	free(p);
}
int main()
{
	int *p,n,max=-9999,min=9999,i;
	printf("Enter no.of elements in array:");
	scanf("%d",&n);
	
	p = malloc(n*sizeof(int));
	
	printf("Enter elements :\n");
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	
	printf("Size:%ld\n",sizeof(p));
		
	//min_max(p,min,max,n);
	
	void (*fp)(int *,int ,int,int)=min_max;
	fp(p,min,max,n);
}

