#include <stdio.h>

/**
* Exercise 1.4.1
* Modify the INTEGER.C program again. This time, have it calculate when
* Sigmund Grockmeister will be 75 years old. He was born in 1952. Fix the
* printf() text string to reflect the new calculation.
*/

int main(void)
{
	int birth, will_be_75;

	birth = 1952;
	will_be_75 = birth + 75;

	printf("Sigmund Grockmeister will be 75 years in %i!\n", will_be_75);
	return (0);
}
