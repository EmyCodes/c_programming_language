/**
*AGE COUNTDOWN
*WRITTEN AND COMPILIED BY OLAMIDE EMMANUEL OGUNDARE
*11:02AM SEPT 10, 2022.
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int countdown;
	int birthdate;
	int todayDate;
	char birth_date[4];
	char today_date[4];

	printf("Enter your birth date: ");	/*Input Birthdate*/
	scanf("%s", &birth_date);		/*Store your input*/
	birthdate = atoi(birth_date);		/*Convert it to an Integer*/

	printf("Enter today's date: ");		/*Input Today's date*/
	scanf("%s", &today_date);		/*Store your Input*/
	todayDate = atoi(today_date);		/*Convert it to an Integer*/

	countdown = birthdate - todayDate;	/*Simple Arithemetics*/
	printf("\nYour birthday is in %idays time!\n", countdown);
	return (0);
}
