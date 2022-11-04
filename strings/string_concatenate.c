#include<stdio.h>
/*
void str_cat(char d[],char s[])
{
	int i,j;
	for(i=0;s[i]!='\0';i++);
	for(j=0;d[j]!='\0';i++,j++)
		s[i]=d[j];
	s[i]='\0';
	printf("%s",s);
}
int main()
{
	char s[100],d[100];
	scanf("%s %s",s,d);
	str_cat(d,s);
}
*/

/*
void str_cat(char *q,char *p)
{
	int i,j;
	for(i=0;*(p+i)!='\0';i++);
	for(j=0;*(q+j)!='\0';i++,j++)
		*(p+i)=*(q+j);
	*(p+i)='\0';
	printf("%s",p);
}
int main()
{
	char s[100],d[100],*p,*q;
	int i;
	p=s;
	q=d;
	scanf("%s %s",s,d);
	str_cat(d,s);
	
}

*/


void str_cat(char *q,char *p)
{
	int i,j;
	for(i=0;*(p+i)!='\0';i++);
	for(j=0;*(q+j)!='\0';i++,j++)
		*(p+i)=*(q+j);
	*(p+i)='\0';
	printf("After Cat:%s\n",p);
}
int main()
{
	char s[100],d[100],*p,*q;
	int i;
	p=s,q=d;
	scanf("%s %s",s,d);
	void (*fp)(char *,char *)=str_cat;
	fp(d,s);
	printf("After cat:%s\n",p);
}
