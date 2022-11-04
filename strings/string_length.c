#include<stdio.h>
/*-----------FOR LOOP------------*/

/*
#define SIZE 10
void string_length(char a[SIZE])
{
	int i;
	for(i=0;a[i]!='\0';i++);
	printf("%d\n",i);
}
int main()
{
	int i;
	char a[SIZE];
	printf("Enter string:\n");
	scanf("%s",a);
	string_length(a);
	return 0;
}
*/

/*----------WHILE LOOP----------*/

/*
void string_length(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	printf("%d\n",i);
}

int main()
{
	int SIZE;
	char str[SIZE];
	printf("Enter size of the array:\n");
	scanf("%d",&SIZE);
	
	printf("Enter string:\n");
	scanf("%s",str);
	string_length(str);
	return 0;
}
*/

/*---------FUNCTION POINTER---------*/

int string_length(char str[])
{
	int i;
	for(i=0;str[i]!='\0';i++);
	return i;
}



int main()
{
	char str[10];
		
	printf("Enter string:\n");
	scanf("%s",str);
	
	int (*fp)(char str[]) = string_length;
	int x=fp(str);
	
	printf("%d\n",x);
	return 0;
}


/*
int string_length(char str[])
{
	int i=0;
	while(str[i]!='\0')
	{
		i++;
	}
	return i;
}

int main()
{	
	char str[10];
	printf("Enter string:\n");
	scanf("%s",str);
	int x=string_length(str);
	printf("%d\n",x);
	return 0;
}
*/
