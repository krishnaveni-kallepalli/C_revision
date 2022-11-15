#include <stdio.h>
#include <stdlib.h>
 
#define replace(a,b,c,d) a##b##c##d
#define execute replace(m,a,i,n)
 
void execute()
{
    printf("Hello World");
    exit(0);
}
