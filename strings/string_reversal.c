#include<stdio.h>
void without_temp(char s[])
{
	int i,j,len;
	for(len=0;s[len]!='\0';len++);
	for(i=0,j=len-1;i<j;i++,j--)
		s[i]=s[i]+s[j]-(s[j]=s[i]);
	printf("%s\n",s);
}
void rev(char s[])
{
	int i,j,ch;
	for(j=0;s[j]!='\0';j++);//finding length
	for(i=0,j=j-1;i<j;i++,j--)
	{
		ch=s[i];
		s[i]=s[j];
		s[j]=ch;
	}
	printf("%s\n",s);
}
void reversal(char s[])
{
	int i,j,ch;
	for(j=0;s[j]!='\0';j++);//finding length
	for(i=0;i<j/2;i++)
	{
		ch=s[i];
		s[i]=s[j-i-1];
		s[j-i-1]=ch;
	}
	printf("%s\n",s);
}
void nreversal(char s[],int n)
{
	int i,j,ch;
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=0;i<n/2;i++)
	{
		ch=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=ch;
	}
	printf("%s\n",s);
	
}

void rev_last_two_elements(char s[])
{
	int i,j=0,ch;
	for(i=0;s[i]!='\0';i++);
	printf("len:%d\n",i);
	for(j=0;s[j]!='\0';j++)
	{
		if(j==i-1)
		{
			ch=s[j];
			s[j]=s[j-1];
			s[j-1]=ch;
		}
	}
	printf("%s",s);
}
void fun(char s[],int n)
{
	int i,j,ch;
	printf("Enter n:");
	scanf("%d",&n);
	
	for(i=0;i<n/2;i++)
	{
		ch=s[i];
		s[i]=s[n-i-1];
		s[n-i-1]=ch;
	}
	printf("%s\n",s);
	for(i=0;s[i]!='\0';i++);
	printf("len:%d\n",i);
	for(j=0;s[j]!='\0';j++)
	{
		if(j==i-1)
		{
			ch=s[j];
			s[j]=s[j-1];
			s[j-1]=ch;
		}
	}
	printf("%s",s);
}
void rev_mid(char s[])
{
	int i,j,ch,mid,k;
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
		/*
		else if(i==j-1)
		{
			ch=s[i];
			for(k=mid+1;s[k]!='\0';k++)
				s[k]=s[k+1];
			s[k+1]=ch;
		}*/
	}
	printf("%s\n",s);
	
}
void funn(char s[])
{
	int i,j,ch,mid,k;
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
		else if(i==j-1)
		{
			ch=s[i];
			for(k=mid+1;s[k]!='\0';k++)
				s[k]=s[k+1];
			s[k+1]=ch;
		}
	}
	printf("%s\n",s);
}

int main()
{
	char s[100],n;
	scanf("%s",s);
	//rev(s);
	//reversal(s);
	//nreversal(s,n);
	//rev_last_two_elements(s);
	//fun(s,n);
	//rev_mid(s);
	//funn(s);
	/*
	void (*fp[])(char [])={rev,reversal};
	int choice;
	printf("0.Method1\n1.Method2\n");
	printf("Enter choice:");
	scanf("%d",&choice);
	if (choice > 1) return 0;
	(*fp[choice])(s);
	*/
	without_temp(s);
	return 0;
}
