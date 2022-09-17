#include <stdio.h>

int main()
{
	int start;
	long delay;

	do
	{
		printf("Please enter the number to start\n");
		printf("the countdown (1 to 100): ");
		scanf("%i",&start);
	}
        while (start < 1 || start > 100);

/* The countdown loop */

	do
	{
		printf("T-minus %i\n",start);
		start--;
		for (delay = 0; delay < 1000000; delay++);	/* ddelay loop*/
	}
	while (start > 0);
	printf("Zero!\nBlast off!\n");
	return (0);
}
