#include <stdio.h>

#define KPM 1.609344

int main(void)
{
	float miles, kilometers; 
	float *pmiles, *k_address;

	printf("Enter a value in miles:");
	scanf("%f", &miles);

	kilometers = miles*1.609;

	printf("%.2f miles works out to %.2f kilometers\n", miles, kilometers);

	pmiles = &miles; 		/* initialize pointer */
	k_address = &kilometers;

	printf("Variable 'miles' is %d bytes long at %p address\n", sizeof(miles), pmiles);
	printf("Variable 'kilometers' is %d byte at %p addres\n", sizeof(kilometers), k_address);
	return (0);
}
