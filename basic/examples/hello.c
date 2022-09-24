#include <stdio.h>

int main(void)
{
	char array[] = "Hello!\n";
	char *a;

	printf("%s", array);

	a = array;

	printf("Array, 'array' is %d bytes long and lives in %p address.\n", sizeof(array), a);
	return (0);
}
