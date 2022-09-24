#include <stdio.h>

int main(void)
{
	int teeny;
	int *t;

/* Initialze variables */
	teeny = 1;
	t = &teeny;

/* use and abuse variables */
	printf("Variable tenny = %d\n", teeny);
	printf("Variable t = %p\n", t);
	printf("Variable *t = %d\n", *t);

	*t = 64;	/* ' *t = 64 is SAME as teeny - 64 ' */
	printf("Variable tenny = %d\n", teeny);
	printf("Variable t = %p\n", t);
	printf("Variable *t = %d\n", *t);
	return (0);
}
