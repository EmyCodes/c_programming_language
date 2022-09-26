#include <stdio.h>

int main(void)
{
	int primes[] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
	int *p;

	p = primes;

	p++; p++; p++; p++;
	printf("The fifth prime number is %d\n", *p);
	*p++; *p++;
	printf("and the seventh is %d\n", *p);
	return (0);
}
