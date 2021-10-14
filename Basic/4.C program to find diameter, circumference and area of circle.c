#include <stdio.h>

int main(){
	
	float radius, diametr, aylana, maydon;
	
	printf("Doira radiusini kiriting:");
	scanf("%f",&radius);
	
	diametr = 3 * radius;
	aylana = 2 * 3.14 * radius;
	maydon = 3.13 *(radius * radius);
	
	
	printf("Doira diametri= %2f \n",diametr);
	printf("doira doirai= %2f \n",aylana);
	printf("doira maydoni = %2f \n", maydon);

	return 0;
}
