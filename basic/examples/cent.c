#include <stdio.h>

int main(void)
{
	int cent[8];
	int x;
	int *p;

	p = cent;
	for (x = 0; x < 8; x++)
	{
		*(p+x) = (x+1) * 100;
		printf("cent[%d] = %d\n", x, *(p+x));
/*		printf("cent[%d] = %d\n", x, *p);
		p++;
*/
	}
	return (0);
}

