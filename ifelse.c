#include<stdio.h>
int main() {
	int islemturu, birincisayi, ikincisayi;
	printf("//////////////////\n 1- Toplama\n 2- Cikarma\n 3- Carpma\n 4- Bolme\n//////////////////\n\nYapmak istediginiz islemi secin:");
	scanf("%d", &islemturu);
	if (islemturu <= 4 && islemturu != 0) {
		printf("Birinci sayiyi girin: ");
		scanf("%d", &birincisayi);
		printf("Ikinci sayiyi girin: ");
		scanf("%d", &ikincisayi);
	}
	if (islemturu == 1) { //TOPLAMA İŞLEMİ
		printf("\nToplama islemi sonucu: %d + %d = %d", birincisayi, ikincisayi, birincisayi+ikincisayi);
	}
	else if (islemturu == 2) { //ÇIKARMA İŞLEMİ
		printf("\nCikarma islemi sonucu: %d - %d = %d", birincisayi, ikincisayi, birincisayi-ikincisayi);
	}
	else if (islemturu == 3) { //ÇARPMA İŞLEMİ
		printf("\nCarpma islemi sonucu: %d * %d = %d", birincisayi, ikincisayi, birincisayi*ikincisayi);
	}
	else if (islemturu == 4) { //BÖLME İŞLEMİ
		printf("\nBolme islemi sonucu: %d / %d = %d", birincisayi, ikincisayi, birincisayi/ikincisayi);
	}
	else {
		printf("\nHatali sayi girdiniz.");
	}
	getchar();
	getchar();
	getchar();

}
