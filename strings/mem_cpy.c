/*   memcpy
 *   void *memcpy(void *s1, const void *s2, size_t n);
 *   copies n characters from the object pointed to by s2 into the object pointed to by s1.
*/
/*

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char s1[100],s2[100];
	scanf("%s",s2);
	//strcpy(s2,"hello_everyone");
	int r;
	memcpy(s1,s2,4);
	s1[4]=NULL;
	printf("%s\n",s1);
	return 0;
}
*/

#include<stdio.h>
int main()
{	
	char src[100] = "Helloeveryone";
	char dest[100];
	
	
	
	
	printf("After copying:\n");
	for(i=0;i<n;i++)
		printf("%s",dest);
}
