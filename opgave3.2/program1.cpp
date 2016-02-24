#include <stdio.h>

int main()
{
	float x, y, z;

	printf("Indtast 2 decimaltal");
	printf("\nTal 1: ");
	scanf("%f", &x);
	printf("\nTal 2: ");
	scanf("%f", &y);

	z = x / y;
	printf("%f divideret med %f er %f\n", x, y, z);

	return 0;
}