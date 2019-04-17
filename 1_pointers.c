#include <stdio.h>
#include <stdlib.h>

/*
This is a basic introduction to pointers
*/


int main()
{
	// initialize variable
	int var = 4;  

	// print out the value of var
	printf("Value of var: %i\n", var); 

	// the address of var is &var
	printf("Address of var: %p\n", &var);

	// if we change the value the address stays the same!
	printf("\nNow we change the value of var\n");	
	var = 10;
	printf("Value: %i\n", var);
	printf("Address: %p\n", &var);

	// define a pointer
	int *ptr;

	// point to var
	ptr = &var;  
	printf("\nAddress stored in ptr variable: %p\n", ptr);
	printf("Value of variable pointed to: %i\n", *ptr);
	printf("Note *(&var): %i\n", *(&var));

	// what if we give var a new value
	var = 20;
	printf("\nValue of variable pointed to: %i\n", *ptr);

	// and we can also change the value using the pointer
	*ptr = 40;
	printf("%i\n", var);

	return 0;
}
