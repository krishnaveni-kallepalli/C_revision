#include<stdio.h>
int main()
{
	/*---higher order to lower order-----*/
	/*
	int a=0x12000000;
	scanf("%x",&a);
	int var=0;
	var |=((0xff000000&a)>>24);
	printf("0x%x",var);
	return 0;
	*/
	
	/*----lower order to higher order-----*/
	/*
	int a=0x12;
	scanf("%x",&a);
	int var=0;
	var |=((0x000000ff&a)<<24);
	printf("0x%x",var);
	return 0;
	*/
	/*----- Lil endian / big endian---*/
	/*
	int i=1;
	char *ptr;
	ptr=(char *)&i;
	if(*ptr)
		printf("lil endian\n");
	else
		printf("big endian\n");
	}
	*/
