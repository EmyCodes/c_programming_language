#include <stdio.h>

int main(void)
{
	float teeny;
	float *t;

	teeny = 1.414213;
	t = &teeny;

	printf("Variable 'teeny' = %d\n", teeny);
	printf("Variable 't' = %p\n", t);
	printf("Variable '*t' = %d\n", *t);
	return (0);
}
