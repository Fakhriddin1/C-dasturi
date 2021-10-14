#include <stdio.h>

	int main(){
		
		float printsip, vaqt, tezlik, SI;
		
		printf("Asosiy summani kiriting (miqdori): ");
		scanf("%f", &printsip);
		
		printf("Vaqtni kiriting:");
		scanf("%f", &vaqt);
		
		printf("Tezlikni kiriting:");
		scanf("%f", &tezlik);
		
		SI = (printsip * vaqt * tezlik) / 100;
		
		printf("Oddiy qiziqish = %f", SI);
		
		return 0;
	}
