#include<stdio.h>
/*
void str_cmp(char s1[],char s2[])
{
	int i=0;
	while(s1[i]!='\0' && s2[i]!='\0' && s1[i]==s2[i])
		i++;
	if(s2[i]!=s1[i])
		printf("Both srtings are different\n");
	else
		printf("Both are equal\n");
}
int main()
{
	char s1[100],s2[100];
	scanf("%s %s",s1,s2);
	str_cmp(s1,s2);
}
*/
void str_cmp(char s1[],char s2[])
{
	int i=0;
	while(s1[i]!='\0' && s2[i]!='\0' && s1[i]==s2[i])
		i++;
	if(s2[i]!=s1[i])
		printf("Both srtings are different\n");
	else
		printf("Both are equal\n");
}
int main()
{
	char s1[100],s2[100];
	scanf("%s %s",s1,s2);
	void (*fp)(char [],char [])=str_cmp;
	fp(s1,s2);
}





