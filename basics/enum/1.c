#include<stdio.h>

typedef enum containers{

    cont1 = 5,

    cont2 = 7,

    cont3 = 3,

    cont4 = 8

}c;

int main()
{ 

c cur_cont ;
	
cur_cont = cont2;

printf("Value of cont2 is = %d \n", cur_cont);

cur_cont = cont3;

printf("Value of cont3 is = %d \n", cur_cont);

cur_cont = cont1;


printf("Value of hearts is = %d \n", cur_cont);

return 0;

}
