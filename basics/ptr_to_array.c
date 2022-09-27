/*
#include<stdio.h>
#define n 5
#define m 5
int func(int *p,int i,int j)
{
	for(i=0;i<n;i++)
		for(j=0;i<m;j++)
			printf("%d",*(p+i)+j));
}

int main()
{
	int a[10][10];
	int i,j;
	int *p;
	p=a;
	for(i=0;i<n;i++)
		for(j=0;i<m;j++)
			scanf("%d",a[i][j]);
	fun(p,n,m);
}
*/

// C program to understand difference between
// pointer to an integer and pointer to an
// array of integers.
#include<stdio.h>
 
int main()
{
    // Pointer to an integer
    int *p;
     
    // Pointer to an array of 5 integers
    int (*ptr)[5];
    int arr[5]={1,2,3,4,5};
     
    // Points to 0th element of the arr.
    p = arr;
     
    // Points to the whole array arr.
    ptr = &arr;
     
    printf("p = %p, ptr = %p\n", p, ptr);
    printf("%ld\n",sizeof(arr));
    p++;
    ptr++;
    printf("p = %p, ptr = %p\n", p, ptr);
     
    return 0;
}
