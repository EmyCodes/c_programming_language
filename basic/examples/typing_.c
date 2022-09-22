#include <stdio.h>

int main(void)
{
	printf("Enter ~ to stop");

	while (getchar() != '~')
		;
	return (0);
}
