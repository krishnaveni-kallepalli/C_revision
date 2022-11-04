#include<stdio.h>
#include<string.h>
void palindrome(char str[10])
{
	int i,c=0,n;
	n=strlen(str);
	for(i=0;i<n/2;i++)
	{
		if(str[i] == str[n-i-1])
			c++;
	}
	if(c==i)
		printf("%s is palindrome \n",str);
	else
		printf("%s is not palindrome \n",str);
}
int main()
{
	char str[10];
	scanf("%s",str);
	palindrome(str);
	return 0;
}
