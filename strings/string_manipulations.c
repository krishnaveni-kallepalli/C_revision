#include<stdio.h>
#include<stdlib.h>
#define LENGTH for(len=0;s[len]!='\0';len++)
int i,j,len;
void str_len(char s[])
{
	LENGTH;//for(len=0;s[len]!='\0';len++);
	printf("String length:%d\n",len);
}
void str_cpy(char d[],char s[])
{
	LENGTH
	d[len]=s[len];
	d[len]='\0';
	printf("Destination:%s\n",d);
}
void str_cmp(char s1[],char s2[])
{
	for(i=0;s1[i]!='\0' && s2[i]!='\0' && s1[i]==s2[i];i++);
	if(s2[i]!=s1[i]) printf("Both are different\n");
	else printf("Both are same\n");
}
void str_rev(char s[])
{
	LENGTH;
	for(i=0,j=len-1;i<j;i++,j--)
	s[i]=s[i]+s[j]-(s[j]=s[i]);
	printf("String reversal:%s\n",s);
}
void str_cat(char d[],char s[])
{
	LENGTH;
	for(j=0;d[j]!='\0';len++,j++)
	s[len]=d[j];
	s[len]='\0';
	printf("String Concatenate : %s\n",s);
}

int main()
{
	char s[10],d[10],s1[10],s2[10];
	int ch;
	while(1){
		printf("1.string length\n2.string copy\n3.string compare\n4.string reversal\n5.string concatenation\nEnter choice:\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("Enter string:");
				scanf("%s",s);
				str_len(s);
				break;
			case 2: printf("Enter string:");
				scanf("%s",s);
				str_cpy(d,s);
				break;
			case 3: printf("Enter string s1 s2:\n");
				scanf("%s %s",s1,s2);
				str_cmp(s1,s2);
				break;
			case 4: printf("Enter string:");
				scanf("%s",s);
				str_rev(s);
				break;
			case 5: printf("Enter string s d:\n");
				scanf("%s %s",s,d);
				str_cat(d,s);
				break;
			default:exit(0);
		}
		printf("\n");
	}
	return 0;
}
	
