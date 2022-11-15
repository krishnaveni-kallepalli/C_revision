#include<stdio.h>
void funn(char s[])
{
	int i,j,ch,ch1,mid,k;
	mid=j/2;
	for(j=0;s[j]!='\0';j++);//finding length
	for(i=0;i<j/2;i++)
	{
		if(i=j/2)
		{
			ch=s[i];
			s[i]=s[i-1];
			s[i-1]=ch;
		}
		
	//}
	//printf("a:%s\n",s);
	//for(i=0;s[i]!='\0';i++)
	//{
		if(i==j-1)
		{
			ch1=s[i];
			for(k=mid+1;s[k]!='\0';k++)
				s[k]=s[k+1];
			s[k+1]=ch1;
		}
	}
	printf("b:%s\n",s);
}

int main()
{
	char s[100],n;
	scanf("%s",s);
	funn(s);
	return 0;
}
