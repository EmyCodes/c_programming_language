#include <stdio.h>

int main(void)
{
	int x = 0;

	for (;;)
	{
		x++;
		if (x <= 5)
		{
			printf("%d, ", x);
			continue;
		}
		printf("%d is greater than 5!\n", x);
	}
	return (0);
}
