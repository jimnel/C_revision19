#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
This is a basic introduction to arrays
*/

int main()
{
	// To define an array
	int a[100];
	// or 
	int b[2] = {1, 2};
	// or 
	int c[] = {3, 4, 5};
	
	// Note that this is wrong
	//int b[];


	// For strings
	char m[6] = "hello";
	// is the same as
	char n[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
	// and
	char *l = "hello";
	// \0 is the null character, all strings in c end with them
	printf("%s, %s, %s\n", m, n, l);


	// For an array of character strings
	char *sentence[4] = {"hello", "how", "are", "you"};
	int i;
	for (i=0; i<4; i++)	
		printf("%s\n", sentence[i]);	

	// there are string opertions in the string.h library, e.g.
	printf("\nLength of '%s': %li\n", sentence[1], strlen(sentence[1]));	


	// in C pointers and arrays are connected
	int x[3] = {1, 2, 3};
	// the varible x contains the address of x[0]
	// i.e. x=&(x[0])	
	printf("\nAddress of x[0]\n");
	printf("%p\n", x);
	printf("%p\n", &(x[0]));
	printf("\nValue of x[0]\n");
	printf("%i\n", *x);

	// you can get the next element by adding 1
	// e.g. second element
	printf("\nValue of x[1]\n");
	printf("%i\n", *(x+1));	
	// can loop over
	printf("\nValues of x\n");
	for (i=0; i<3; i++)
		printf("%i ", *(x+i));
	printf("\n");

	// Address ofi-th array element = address of0-th element +i×b, wherebisthe size of a single element, 1,2,4, or 8 bytes.
	return 0;
}
