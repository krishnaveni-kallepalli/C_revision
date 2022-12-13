#include<stdio.h>
int main()
{
	char s[10]="krish";
	int i,j,len;
	for(len=0;s[len]!='\0';len++);
	for(i=0,j=len-1;i<j;i++,j--)
		s[i]=s[i]+s[j]-(s[j]=s[i]);
	printf("%s\n",s);
	return 0;
}
