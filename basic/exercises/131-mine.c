/**
* SOURCE CODE WRITTEN BY OLAMIDE EMMANUEL OGUNDARE
* SEPT 16TH 2022
*/

#include <stdio.h>

/**
* Exercise 1.3.1
* Write a program named MINE. This program displays the text This computer
* belongs to followed by your name, address, and phone number. Be
* sure to include a comment heading to list your name and the date, but also
* to describe why you think such a program would be necessary.
*/

int main(void)
{

	int phone;

	phone = 234110010;

	puts("BELOW ARE MY DETAILS: ");
	printf("Name - Ogundare Olamide Emmanuel\n");
	printf("Address - No 11 Tafawa, Nigeria\n");
	printf("Phone - +%i\n", phone);
	return (0);
}
