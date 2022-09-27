/*

#include<stdio.h>
int cpy(char d[],char s[]);

int main()
{
	char s[10],d[10];
	
	printf("Enter string :");
	scanf("%s",s);
	printf("Source	    : %s\n",s);
	
	int (*fp)(char d[], char s[]) = cpy;
	fp(d,s);
	
	printf("Destination : %s\n",d);
}
int cpy(char d[],char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
	{
		d[i]=s[i];
	}
	d[i]='\0';
	
}
*/



#include<stdio.h>
void cpy(char *,char *);

int main()
{
	char s[10],d[10];
	char *p,*q;
	int i;
	p=s;
	q=d;
	printf("Enter s:");
	scanf("%s",s);
	printf("Source	    : %s\n",s);
	
	printf("Enter d:");
	scanf("%s",d);
	printf("Destination:%s\n",d);
	
	void (*fp)(char *,char *) = cpy;
	fp(q,p);
	
	printf("Destination : %s\n",*(q+i));
}
void cpy(char *q,char *p)
{
	int i;
	for(i=0;*(p+i)!='\0';i++)
	{
		*(q+i)=*(p+i);
	}
	*(q+i)='\0';
	
}
