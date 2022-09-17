#include <stdio.h>

#define COUNT 20000000

void dropBomb(void);
void delay(void);

int main(void)
{
	char x;
	printf("Press Enter to drop bomb:");
	x = getchar();
	dropBomb();
	printf("Yikes!");
	return (0);
}

void dropBomb(void)
{
	int x;

	for (x = 20; x > 1; x--)
	{
		puts("		*");
		delay();
	}
	puts("		BOOM!");
}

void delay(void)
{
	long int x;
	for (x = 0; x < COUNT; x++)
		;
}
