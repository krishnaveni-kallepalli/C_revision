#include<stdio.h>
void delete_chr(char s[],char ch)
{
        int i,j;
        for(i=0;s[i]!='\0';i++)
                if(s[i]==ch)
                        for(j=i;s[j]!='\0';j++)
                                s[j]=s[j+1];
	printf("%s",s);
}
int main()
{       
        char s[100],ch;
        scanf("%s",s);
        scanf(" %c",&ch);
        delete_chr(s,ch);
}       
   
