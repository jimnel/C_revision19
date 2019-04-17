#include <stdio.h>
#include <stdlib.h>


int fac(int n)
{
	printf("fac(%i)\n", n);
	if (n==0)
		return 1;
	else
		return n*fac(n-1);
}


double sum(int n, double x[])
{
	if (n == 0)
		return 0;
	else
		return x[n-1] + sum(n-1, x);
}


int main()
{
	int n=5;
	printf("n=%i\n", n);
	printf("n!=%i\n", fac(n));

	printf("\n");

	double x[3] = {1, 2, 3};
	printf("x = {");
	int i;
	for (i=0; i<3; i++)
		printf("%lf ", x[i]);
	printf("}\n");
	for (i=0; i<4; i++)
		printf("sum(%i,x)=%f\n", i, sum(i,x));
}
