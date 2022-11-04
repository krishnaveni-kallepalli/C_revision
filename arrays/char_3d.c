#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k;
	char a[4][2][3];
	char *var=malloc(sizeof(char));
	printf("Enter elements into array:");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
			{
				scanf(" %c",&a[i][j][k]);
				if(i==0 && j==1 && k==2)
					var =&a[i][j][k];
			}
		}
	}
	printf("array size=%ld\n",sizeof(a));
	printf("Var = %c\n",*var);
	printf("Elements in array:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<2;j++)
		{
			for(k=0;k<3;k++)
			{
				printf(" %c\t",a[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}
}
