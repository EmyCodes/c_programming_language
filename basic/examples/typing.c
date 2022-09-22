#include <stdio.h>

int main(void)
{
	char ch;

	printf("Press ~ and Enter to stop: ");
	while (ch != '~')
	{
		ch = getchar();
	}
	return (0);
}
