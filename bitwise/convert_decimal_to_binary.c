
#include<stdio.h>
#define NUM_SIZE sizeof(int)*2
void dec_to_bin(int num)
{
	int i,index,a[NUM_SIZE];
	index=NUM_SIZE - 1;
	while(index >= 0)
	{
		/*
		k=num >> i;
		if(k & 1)
			printf("1");
		else
			printf("0");
		*/
		
		a[index]=num & 1;
		index--;
		num >>=1;
	}
	for(i=0;i<NUM_SIZE;i++)
		printf("%d",a[i]);
	//printf("\n");
}
void bin(int num)
{
	int i,k;
	for(i=NUM_SIZE-1;i>=0;i--)
	{
		k=num >> i;
		if(k & 1)
			printf("1");
		else
			printf("0");
	}
}
void arth(int num)
{
	int i,a[NUM_SIZE];
	for(i=0;num>0;i++)    
	{    
		a[i]=num%2;    
		num=num/2;    
	}    
	printf("\nResult:");  
	for(i=i-1;i>=0;i--)    
		printf("%d",a[i]);    
}
int main()
{
	int num;
	printf("Enter number:");
	scanf("%d",&num);
	/*
	dec_to_bin(num);
	printf("\n");
	bin(num);
	*/
	void (*fp[])(int)={dec_to_bin,bin,arth};
	int ch;
	printf("0.bitwise1\n1.bitwise2\n2.arthematic\n");
	printf("Enter choice:");
	scanf("%d",&ch);
	if (ch > 2) return 0;
	(*fp[ch])(num);
	
}









