#include<stdio.h>
void rev(char s[],int index,int size)
{
	int temp;
	temp = s[index];
	s[index] = s[size - index];
	s[size - index] = temp;
	
	if(index == size/2)
		return;
	rev(s,index+1,size);
}
int main()
{
	char s[100];
	int size;
	printf("Enter string:");
	scanf("%s",s);
	for(size=0;s[size]!='\0';size++);
	printf("%d\n",size);
	rev(s,0,size-1);
	printf("After reversal:%s\n",s);
}
