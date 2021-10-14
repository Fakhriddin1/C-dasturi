#include <stdio.h>

int main(){
	
	
	float tayanch, balandlik, maydon;
	
	printf("Uchburchakning asosini kiriting:");
	scanf("%f", &tayanch);
	printf("Uchburchakning balandligini kiriting:");
	scanf("%f",&balandlik);
	
	maydon = (tayanch * balandlik) / 2;
	
	printf("Uchburchakning maydoni = %.2f", maydon);
	
	return 0;
}
