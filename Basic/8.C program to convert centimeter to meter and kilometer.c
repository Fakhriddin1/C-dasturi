#include <stdio.h>

int main()
{
	float sm, metr, km;
	
	printf("Uzunlikni santimetrda kiriting:");
	scanf("%f", &sm);
	
	metr = sm /100.0;
	km = sm / 1000.0;
	
	printf("Metrdagi uzunlik = %.2f m/n", metr);
	printf("Kilometrdagi uzunlik = %.2f km", km);
	
	return 0;
	
}
