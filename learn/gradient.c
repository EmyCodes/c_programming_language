#include <stdio.h>

int main(void)
{
	int a, b;

	printf("Values of (x, y)\n");

	for (a = 1; a < 10; a++)
	{
		for (b = 2; b < 12; b++)
		{
			printf("(%i, %i)\t", a, b);
		}
		putchar('\n');
	}
	return (0);
}
