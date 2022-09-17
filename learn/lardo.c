#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int w;
	char weight[4];

	printf("Enter your weight: ");
	gets(weight);
	w=atoi(weight);

	printf("Here is what you are now: %i\n",w);
	w++;
	printf("Your weight after the potatoes: %i\n",w);
	w++;
	printf("Here you are after the mutton: %i\n",w);
	w=w+8;
	printf("Your weight after dessert: %i pound\n",w);
	printf("Lardo!\n");
	return(0);
}
