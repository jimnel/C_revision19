#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
	/*
	Why use dynamic memory allocation?
	1) C only supports variable sized arrays from C99 standard
	2) If a large amount of memory is required it's better to store it on the heap rather than the stack
	https://www.gribblelab.org/CBootCamp/7_Memory_Stack_vs_Heap.html
	*/
	int n = atoi(argv[1]);
	printf("Number Used: %i\n", n);
	
	int arr[n];


	// set arr[i]=i
	int i;
	for (i=0; i<n; i++) 
		arr[i] = i;		
	
	for (i=0; i<n; i++) 
		printf("%i ", arr[i]);
	printf("\n");


	// calloc	
	// a is a pointer 
	double * a;
	a = ( double * ) calloc ( n, sizeof ( double ) );
	// calloc initializes to 0
	printf("\na[2]: %lf\n", a[2]);
	a[3] = 4.0;
	a[0] = 3.3;
	printf("a[3]: %lf\n", a[3]);
	printf("\nAddress of a: %p\n", a);
	printf("Value of a: %lf\n", *a);

	return 0;
}
