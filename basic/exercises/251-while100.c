#include <stdio.h>

/**
*   Exercise 2.5.1
*   Concoct a program that displays numbers 1 through 100 by using a while
*   loop. Name the program WHILE100.C.
*/

int main(void)
{
	int num = 1;

	while(num <=  100)
	{
		printf("%i\t", num++);
	}
	return (0);
}
