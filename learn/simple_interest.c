#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const int I, p, r, t;
	const char principal, rate, time;

	printf("SIMPLE INTEREST CALCULATOR\n");

	printf("Enter principal value: ");
	scanf("%s",&principal);
	p=atoi(principal);

	printf("Enter time(years) value: ");
	scanf("%s",&time);
	t=atoi(time);

	printf("Enter interest rate(%): \n");
	scanf"%s",&rate);
	r=atoi(rate);

	I=(p*r*t)/100;

	prints("The Simple Interest, I, for %iyears is %i\n",t,I);
	return(0);
}
