#include <stdio.h>
/**
* Exercise 4.1.5
* Write a program based on HELLO.C where the address of each element of a
* character array is displayed. Hint: Use a for loop to stomp through each
* element of the array. Only one pointer variable needs to be used.
*/

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
