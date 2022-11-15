#include<stdio.h>
void printindex(char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
		printf("%c:%d\n",s[i],i);
}
int main()
{
	char s[100];
	scanf("%s",s);
	printindex(s);
}
