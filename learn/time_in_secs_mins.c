/*
TIME CONVERSION SOURCE CODE 
WRITTEN AND COMPILED BY OLAMIDE EMMANUEL OGUNDARE
11:43AM SEPT 10TH, 2022
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int time_in_secs;
	int time_in_mins;
	char time_in_hours[4];

	puts("\nCONVERSION OF TIME TO SECONDS AND MINUTES");				//Prompt - TITLE
	printf("Enter your time in hour(s): ");						//Input your time in the unit of hours
	scanf("%s",&time_in_hours);							//Store your Input
	time_in_mins=atoi(time_in_hours)*60;						//Convert your stored Input to an Integer and assigning it to a varaible
	time_in_secs=time_in_mins*60;							//Assigning

	printf("\nThe time is %dmins %dsecs.\n",time_in_mins,time_in_secs);		//Results
	return(0);
}
