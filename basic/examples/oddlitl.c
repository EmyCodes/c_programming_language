#include <stdio.h>

int main(void)
{
	char c;
	short int i;
	long x;
	float f;
	double d;
	short int temp[8];

	puts("Variables sizes:");

/**
* You can use the sizeof keyword to find out
* the variable’s girth in memory
*/

/*	printf("Size of char variable c = %d\n", sizeof(c));
	printf("Size of int variable i = %d\n", sizeof(i));
	printf("Size of long variable x = %d\n", sizeof(x));
	printf("Size of float variable f = %d\n", sizeof(f));
	printf("Size of double variable d = %d\n", sizeof(d));
	printf("Size of the temp array = %d\n", sizeof(temp)); */

/**
* When the & operator is prefixed to a variable name, it returns 
* the memory address of the variable. Here’s another modification to the 
* ODDLITL.C source code, to prove it:
*/
	printf("Memory location of char variable c = %p\n", &c);
	printf("Memory location of int variable i = %p\n", &i);
	printf("Memory location of long variable x = %p\n", &x);
	printf("Memory location of float variable f = %p\n", &f);
	printf("Memory location of double variable d = %p\n", &d);

	for (i = 0; i < 8; i++)
	{
		printf("Memory location of the temp[%d] = %p\n", i, &temp[i]);
	}
	return (0);
}
