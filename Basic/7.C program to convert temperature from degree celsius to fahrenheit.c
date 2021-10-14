#include <stdio.h>

int main()
{
	float selsiy, farengeyt;
	
	printf("Tselsiy bo'yicha haroratni kiriting:");
	scanf("%d",&selsiy);
	
	farengeyt = (selsiy * 9 / 5) + 32;
	
	printf("%.2f Selsiy = %.2f Farengeyt ", selsiy, farengeyt);
	
	
}
