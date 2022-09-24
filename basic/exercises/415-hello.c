#include <stdio.h>

int main(void)
{
	char array[] = "Hello!\n";
	char *a;
	int x;

	for (x = 0; x < sizeof(array);  x++)
	{
		a = &array[x];
		printf("array[%d] at %p address = %c\n", x, a, array[x]);
	}
	return (0);
}
