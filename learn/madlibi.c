/*
MADLIBI.C Source Code
Written by Ogundare Olamide Emmanuel
SEPT 9TH, 2022 3:00PM in HIS ROOM
*/

#include <stdio.h>

int main()
{	
	char adjective[20];
	char food[20];
	char chore[20];
	char furniture[20];

/*Get the words to use in the madlib */

	printf("Enter an adjective: "); 	/* prompt */
	scanf("%s",&adjective);			/* input */
	printf("Enter a food: ");
	scanf("%s",&food);
	printf("Enter a household chore (past tense): ");
	scanf("%s",&chore);
	printf("Enter an item of the furniture: ");
	scanf("%s",&furniture);

/* Display the output */
	printf("\n\nDon't touch that %s %s! \n",adjective,food);
	printf("i just %s the %s\n",chore,furniture);
	return(0);
}

