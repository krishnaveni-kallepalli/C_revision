//To display the elements and calculate the sum of n elements in array by the user by using dynamic memory allocation functions. 
//Also try to reduce the wastage of memory.

#include<stdio.h>
#include<stdlib.h>
void sum(int *p,int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
		sum = sum+*(p+i);
	printf("Sum of elements is: %d\n",sum);
	free(p);
	printf("Displaying the cleared out memory location : ");
   	for(i=0;i<n;i++)
      		printf("%d\n",p[i]);//Garbage values will be displayed//
}
int main()
{
	int *p,n,i;
	printf("Enter n:");
	scanf("%d",&n);
	
	p = calloc(n,sizeof(int));
	
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	
	printf("Size:%ld\n",sizeof(p));
	
	//sum(p,n);
	
	void (*fp)(int *,int)=sum;
	fp(p,n);
	
}
