/*

#include<stdio.h>
int len(char s[10]);
int main()
{
	char s[10];
	printf("Enter string :");
	scanf("%s",s);
	
	
	int (*fp)(char s[10])=len;
	int i = 0;
	i = fp(s);
	
	printf("Length is : %d\n",i);
}
int len(char s[10])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
	;
	}
	return i;
}
*/


#include<stdio.h>
int len(char s[10]);
int main()
{
	char s[10];
	char *p;
	p=s;
	
	printf("Enter string :");
	scanf("%s",s);
	
	int (*fp)(char *p)=len;
	int i = 0;
	i = fp(s);
	
	printf("Length is : %d\n",i);
}
int len(char *p)
{
	int i;
	for(i=0;*(p+i)!='\0';i++)
	{
	;
	}
	return i;
}

