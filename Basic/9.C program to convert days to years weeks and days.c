#include <stdio.h>

int main(){
	
	int kun, hafta, yil;
	
	printf("kunni kiriting:");
	scanf("%d,",&kun);
	
	yil = (kun / 365);
	hafta = (kun % 365) / 7;
	kun = kun - ((yil * 365) +(hafta * 7));
	
	printf("yil: %d\n",yil);
	printf("hafta: %d\n",hafta);
	printf("kun: %d\n", kun);
	
	return 0;

}
