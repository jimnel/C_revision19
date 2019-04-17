#include <stdio.h>
#include <stdlib.h>

/*
This illustrates how pointers can be used for call by reference
*/

void f1(int n)
{
	printf("Initial: %i\n", n);
	n += 10;
	printf("Final: %i\n", n);
}


void f2(int *n)
{
	printf("Initial: %i\n", *n);
	(*n) += 10;
	printf("Final: %i\n", *n);
}



int main()
{
	// Call by value
	printf("\nUsing f1 (Call by value)\n");
	int var= 4; 
	f1(var);
	printf("Outside Function: %i\n", var);

	// Call by reference
	printf("\nUsing f2 (Call by reference)\n");
	int var2= 4; 
	f2(&var2);
	printf("Outside Function: %i\n", var2);

	return 0;
}
