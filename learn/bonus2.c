#include <stdio.h>

float bonus(char x);

int main(void)
{
	char name[20];
	char level;
	float b;

	printf("Enter employee name: ");
	gets(name);
	printf("Enter bonus level (0, 1, 2): ");
	level = getchar();
	b = bonus(level);
	b *= 100;
	printf("The bonus for %s will be $%.2f.\n", name, b);
	return (0);
}

/*  Calculate the Bonus */

float bonus(char x)
{
	int v;
	if (x == '0')
		v = 0.33;			/* Bottom-level bonus */
	else if (x == '1')
		v = 1.50;			/* Second-level bonus */
	else
		v = 3.10;
	return (v);				/* Best bonus */
}
