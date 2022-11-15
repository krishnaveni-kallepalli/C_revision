#include<stdio.h>
#include<stdlib.h>

// entry point function
int nomain();

void _start(){

	// calling entry point
	nomain();
	exit(0);
}

int nomain()
{
	puts("hello");
	return 0;
}


//gcc -nostartfiles entry_during_compilation.c 
//gcc -nostartfiles filename.c 
