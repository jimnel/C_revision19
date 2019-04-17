#include <stdio.h>
#include <stdlib.h>

/*
why use typedef?
https://stackoverflow.com/questions/1675351/typedef-struct-vs-struct-definitions
*/

typedef struct COMPLEX { 
	double re, im; 

} COMPLEX;

void print_complex_number(COMPLEX n)
{
	printf("%f + (%f)i\n", n.re, n.im);
}

void add(COMPLEX x, COMPLEX y, COMPLEX *result)
{
	(*result).re = x.re + y.re;
	(*result).im = x.im + y.im;
}

void multiply(COMPLEX x, COMPLEX y, COMPLEX *result)
{
	(*result).re = x.re*y.re - x.im*y.im;
	(*result).im = x.re*y.im + x.im*y.re;
}

int main()
{
	COMPLEX a;
	a.re = 4;
	a.im = 2;
	printf("a =\n\t");
	print_complex_number(a);

	COMPLEX b;
	b.re = 5;
	b.im = 3;
	printf("\nb =\n\t");
	print_complex_number(b);

	COMPLEX ab_sum; 
	add(a,b, &ab_sum);
	printf("\na + b =\n\t");
	print_complex_number(ab_sum);

	COMPLEX ab_prod;
	multiply(a, b, &ab_prod);
	printf("\na*b =\n\t");
	print_complex_number(ab_prod);
	

	return 0;
}
