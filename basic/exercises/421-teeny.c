#include <stdio.h>
/**
* Exercise 4.2.1
* Modify the source code for TEENY.C. Change the variable types for teeny
* and t from int to float. Modify the conversion characters in the various
* printf() statements. Finally, change the value assigned to teeny equal to
* 1.414213.Exercise 4.2.1
* Modify the source code for TEENY.C. Change the variable types for teeny
* and t from int to float. Modify the conversion characters in the various
* printf() statements. Finally, change the value assigned to teeny equal to
* 1.414213.
 */

int main(void)
{
	float teeny;
	float *t;

	teeny = 1.414213;
	t = &teeny;

	printf("Variable 'teeny' = %f\n", teeny);
	printf("Variable 't' = %p\n", t);
	printf("Variable '*t' = %f\n", *t);
	return (0);
}
