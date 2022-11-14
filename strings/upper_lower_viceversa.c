#include<stdio.h>
void fun(char s[])
{
        int i;
        for(i=0;s[i]!='\0';i++)
        {
                if(s[i]>='a'&&s[i]<='z')
                        s[i]=s[i]-32;
		else if(s[i]>='A'&&s[i]<='Z')
                        s[i]=s[i]+32;

        }
        printf("%s",s);
}
int main()
{       
        char s[100];
        scanf("%s",s);
        fun(s);
}    
