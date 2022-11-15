/*
To Find Maximum Difference Between Two Elements in an Array

5 4 3 2 1

big = 5
small = 1
Max difference = big - small 
5-1= 4

*/

#include<stdio.h>
void max_diff(int a[],int n)
{
	int big,small;
	big=small=a[0];
	int i;
	for(i=1;i<n;i++)
	{
		if(a[i]>big)
			big=a[i];
		if(a[i]<small)
			small=a[i];
	}
	printf("Max Difference:%d",big-small);
}
int main()
{
	int a[100],i,n;
	printf("Enter no of elements in array:");
	scanf("%d",&n);
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	void (*fp)(int [],int) = max_diff;
	fp(a,n);
}
