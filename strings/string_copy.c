#include<stdio.h>
/*void string_copy(char d[],char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
		d[i]=s[i];
	d[i]='\0';
	printf("%s",d);
}
int main()
{
	char s[10],d[10];
	printf("Enter source:\n");
	scanf("%s",s);
	printf("Enter destination:\n");
	scanf("Destination:%s\n",d);
	string_copy(d,s);
}
*/
/*
void string_copy(char d[],char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
		d[i]=s[i];
	d[i]='\0';
	printf("Destination:%s\n",d);
}
int main()
{
	char s[10],d[10];
	scanf("%s %s",s,d);
	string_copy(d,s);
}
*/

/*
void string_copy(char d[],char s[])
{
	int i;
	for(i=0;s[i]!='\0';i++)
		d[i]=s[i];
	d[i]='\0';
}
int main()
{
	char s[10],d[10];
	printf("Enter source:\n");
	scanf("%s",s);
	printf("Enter destination:\n");
	scanf("%s",d);
	void (*fp)(char [],char [])=string_copy;
	fp(d,s);
	printf("Destination:%s\n",d);
}
*/


void string_copy(char *q,char *p)
{
	int i;
	for(i=0;*(p+i)!='\0';i++)
		*(q+i)=*(p+i);
	*(q+i)='\0';
}
int main()
{
	char s[10],d[10],*p,*q;
	p=s;
	q=d;
	printf("Enter source:\n");
	scanf("%s",s);
	printf("Enter destination:\n");
	scanf("%s",d);
	void (*fp)(char [],char [])=string_copy;
	fp(q,p);
	printf("Destination:%s\n",d);
	printf("Destination:%s\n",q);
}


