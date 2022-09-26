#include <stdio.h>

/**
* One pointer for everyone to share
* You don’t need a pointer for every variable. Pointers can be shared. As long
* as the pointer’s type matches the type of variable (int for int or char for
* char, for example), you can reuse old pointers just as Grandma reuses old
* pie tins. Here’s a sample program:
*/

int main(void)
{
	int start, finish;
	int *examine;

	examine = &start;
	*examine = 100;
	printf("%d little old ladies started the race.\n", start);
	examine = &finish;
	*examine = 9;
	printf("But only %d little old ladies finished.\n", finish);
	return (0);
}
