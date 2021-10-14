#include <stdio.h>
#include <math.h>

int main(){
	
	double baza, korgazma, kuch;
	
	printf("Baza kiriting:");
	scanf("%lf",&baza);
	printf("Eksponentni kiriting");
	scanf("%lf",&korgazma);
	
	kuch = pow(baza, korgazma);
	
	printf("%.2lf ^ %2lf = %2lf", baza, korgazma, kuch);
	
	return 0;
}
