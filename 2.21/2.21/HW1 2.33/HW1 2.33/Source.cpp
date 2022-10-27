#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a, b, c, d, e, totalmoney;

	printf("Total miles driven per day:");
	scanf("%f", &a);
	printf("Cost per gallon of gasolline:");
	scanf("%f", &b);
	printf("Average miles per gallon:");
	scanf("%f", &c);
	printf("Parking fees per day:");
	scanf("%f", &d);
	printf("Tolls per day:");
	scanf("%f", &e);

	totalmoney = (a / c)*b + d + e;
	printf("%f", totalmoney);
	return 0;
}