#include<stdio.h>
#define pi 3.14
#define x 10
int main()
{
//hello
   printf("Hey");
   printf("%d",pi);
   #ifdef x
      printf("hello\n");      // this is compiled as  x is defined
   #else
      printf("bye\n");       // this isn't compiled
   #endif
}


