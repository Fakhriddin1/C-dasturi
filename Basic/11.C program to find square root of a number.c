#include <stdio.h>
#include <math.h>

int main(){
	
	double raqam,ildiz;
	
	printf("Kvadrat ildizni topish uchun istalgan raqamni kiriting:");
	scanf("%lf", &raqam);
	
	ildiz = sqrt(raqam);
	printf("Square root of %.2lf = %.2lf",raqam,ildiz);
	
	return 0;
}
