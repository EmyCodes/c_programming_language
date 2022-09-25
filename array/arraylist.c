/**
* Source code Devoloped by OGUNDARE OLAMIDE EMMANUEL
* SEPT 25TH, 2022 1:10AM OSUN STATE, NIGERIA.
*/

#include <stdio.h>
#define display puts
#define NUM_OF_ELEMENTS 10

/* Program that that create an Array of integer 1 to 20 
* From two array list:
* Even: [2, 4, 6, 8, 10, 12, 14, 16, 18, 20] and Odd: [1, 3, 5, 7, 9, 11, 13, 15, 17, 19]
*/

int main(void)
{
	int even[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
	int odd[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
	int x;

	display("HORIZONTAL DISPLAY");
	
	printf("Result = [");

	for (x = 0; x < NUM_OF_ELEMENTS; x++)
	{
		printf("%d %d ", odd[x], even[x]);
	}
	printf("]\n");

	return (0);
}
